#ifndef __LPASTAR_H__
#define __LPASTAR_H__

#include <vector> 
#include "globalVariables.h"
#include <queue>


class GridWorld; //forward declare class GridWorld to be able to create the friend functions later

class LpaStar{

public:
    LpaStar(int rows, int cols); //constructor

    void initialise(int startX, int startY, int goalX, int goalY);
	 double minValue(double g_, double rhs_);
    //double maxValue(double v1, double v2);
    int maxValue(int v1, int v2);
	 void calcKey(int x, int y);
    void calcKey(LpaStarCell *cell);
    //void calc_H(int x, int y);
    double calc_H(int x, int y);
    void updateHValues();
    void updateAllKeyValues();

    //void copyMazeToDisplayMap(GridWorld gWorld);
    friend void copyMazeToDisplayMap(GridWorld &gWorld, LpaStar* lpa);
    friend void copyDisplayMapToMaze(GridWorld &gWorld, LpaStar* lpa);

    vector <double>  calculateKey(LpaStarCell *cell);
    vector <double>  getU_TopKey();// vector
    void  removeElementFromU(LpaStarCell *u);
//    bool  removeElementFromU(LpaStarCell *u);
    void updateVertex(LpaStarCell *u);
    void computeShortestPath();
    void replanning();
    bool hasUknowns();
    void run();
private:
	
    vector<vector<LpaStarCell> > maze;   
    LpaStarCell l;
//    vector<LpaStarCell* > U; //Priority Queue
    struct CompareKey{
        bool operator()(LpaStarCell *cell_a,LpaStarCell * cell_b){
            return cell_a->key[0] >=cell_b->key[0] ||
            (cell_a->key[0]== cell_b->key[0] &&
            cell_a->key[1]>=cell_b->key[1]);
        }
    };
    priority_queue<LpaStarCell,vector <LpaStarCell*>,CompareKey> U; //02
    LpaStarCell* start;
    LpaStarCell* goal;

    int rows;
    int cols;
    int vertexAccess;
    int MaxQlength;

};

#endif
