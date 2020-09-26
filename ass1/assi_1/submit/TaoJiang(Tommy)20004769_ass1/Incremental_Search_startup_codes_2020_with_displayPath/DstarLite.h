#ifndef __DstarLite_H__
#define __DstarLite_H__

#include <iostream>
#include <stdio.h>
#include <vector>
#include <malloc.h>
#include <assert.h>
#include "globalVariables.h"
#include <queue>

// #include "gridworld.h"

class GridWorld; //forward declare class GridWorld to be able to create the friend functions later

class DstarLite{

public:
    DstarLite(int rows, int cols); //constructor
    void initialise(int startX, int startY, int goalX, int goalY);
    double minValue(double g_, double rhs_);
    //double maxValue(double v1, double v2);
    int maxValue(int v1, int v2);
    void calcKey(int x, int y);
    void calcKey(DStarLiteCell *cell);
//    void calcKey(DStarLiteCell *cell);
    //void calc_H(int x, int y);
    double calc_H(int x, int y);
    void updateHValues();
    void updateAllKeyValues();

    //void copyMazeToDisplayMap(GridWorld gWorld);
    friend void copyMazeToDisplayMap_dstarLite(GridWorld &gWorld, DstarLite* dstarLite);
    friend void copyDisplayMapToMaze_dstarLite(GridWorld &gWorld, DstarLite* dstarLite);

    vector <double>  calculateKey(DStarLiteCell *cell);
    vector <double>  getU_TopKey();// vector
    void  removeElementFromU(DStarLiteCell *u);
//    bool  removeElementFromU(DStarLiteCell *u);
    void updateVertex(DStarLiteCell *u);
    void computeShortestPath();
    void replanning();
    void searching();
private:

    vector<vector<DStarLiteCell> > maze;
    DStarLiteCell l;
//    vector<DStarLiteCell* > U; //Priority Queue
    struct CompareKey{
        bool operator()(DStarLiteCell *cell_a,DStarLiteCell * cell_b){
            return cell_a->key[0] >=cell_b->key[0] ||
                   (cell_a->key[0]== cell_b->key[0] &&
                    cell_a->key[1]>=cell_b->key[1]);
        }
    };
    priority_queue<DStarLiteCell,vector <DStarLiteCell*>,CompareKey> U; //02
    DStarLiteCell* start;
    DStarLiteCell* goal;
    DStarLiteCell* last;

    int rows;
    int cols;
    int vertexAccess;
    int MaxQlength;
    int state_expansions;
    double k_m;

};

#endif

