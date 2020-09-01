#include <stdio.h>
#include <vector>
#include <malloc.h>
#include <assert.h>
#include <algorithm>    
#include <math.h>
#include <stdlib.h>     /* calloc, exit, free */

#include "DstarLite.h"
#include "globalVariables.h"
#include "gridworld.h"

DstarLite::DstarLite(int rows_, int cols_){
		 rows = rows_;
	    cols = cols_;
	 
		 //Allocate memory 
		 maze.resize(rows);
		 for(int i=0; i < rows; i++){
		   maze[i].resize(cols);
		 }
}
void DstarLite::initialise(int startX, int startY, int goalX, int goalY){
    //03
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            maze[i][j].g = INF;
            maze[i][j].rhs = INF;
            for (int k = 0; k < DIRECTIONS; k++) {
                maze[i][j].predecessor[k] = maze[i][j].move[k];
            }
        }
    }
    start = new DStarLiteCell;
    goal = new DStarLiteCell;

    //START VERTEX
    start->g = INF;
    start->rhs = 0.0;//04
    start->x = startX;
    start->y = startY;

    //GOAL VERTEX
    goal->g = INF;
    goal->rhs = INF;
    goal->x = goalX;
    goal->y = goalY;
    //---------------------
    maze[start->y][start->x].g = start->g;
    maze[start->y][start->x].rhs = start->rhs;

    maze[goal->y][goal->x].g = goal->g;
    maze[goal->y][goal->x].rhs = goal->rhs;
    //---------------------
    updateHValues();
    calcKey(&maze[start->y][start->x]);
    U.push(&maze[start->y][start->x]);//05
    cout << "priority Queue is empty : "<<U.empty()<<endl;
    cout << "priority Queue top : "<<getU_TopKey()[0]<<","<<getU_TopKey()[1]<<endl;
    cout << "priority Queue size : "<<U.size()<<endl;
    start = &maze[start->y][start->x];
    goal = &maze[goal->y][goal->x];


    vertexAccess=0;//TODO
    maxQLength=0;//TODO

    //for debugging only
    //~ for(int i=0; i < rows; i++){
    //~ for(int j=0; j < cols; j++){
    //~ //cout << maze[i][j].g << ", ";
    //~ cout << maze[i][j].rhs << ", ";

    //~ }
    //~ cout << endl;
    //~ }

}

double DstarLite::minValue(double g_, double rhs_){
    if(g_ <= rhs_){
        return g_;
    } else {
        return rhs_;
    }
}

int DstarLite::maxValue(int v1, int v2){

    if(v1 >= v2){
        return v1;
    } else {
        return v2;
    }
}

double DstarLite::calc_H(int x, int y){

    int diffY = abs(goal->y - y);
    int diffX = abs(goal->x - x);

    //maze[y][x].h = (double)maxValue(diffY, diffX);
    return (double)maxValue(diffY, diffX);
}

void DstarLite::updateHValues(){
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            maze[i][j].h = calc_H(j, i);
        }
    }

    start->h = calc_H(start->x, start->y);
    goal->h = calc_H(goal->x, goal->y);
}

void DstarLite::calcKey(int x, int y){
    double key1, key2;

    key2 = minValue(maze[y][x].g, maze[y][x].rhs);
    key1 = key2 + maze[y][x].h;
}

void DstarLite::calcKey(DStarLiteCell *cell){
    double key1, key2;

    key2 = minValue(cell->g, cell->rhs);
    key1 = key2 + cell->h;
    // cout << "key1:" << key1 << " ; key2: " << key2<<endl;
    cell->key[0] = key1;
    cell->key[1] = key2;
}

void DstarLite::updateAllKeyValues(){
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            calcKey(&maze[i][j]);
        }
    }

    calcKey(start);
    calcKey(goal);
}

/*=======++++++++++++++=========*/
vector <double> DstarLite::calculateKey(DStarLiteCell *cell){
    vector <double> ret;
    calcKey(cell);
    ret.push_back(cell->key[0]);
    ret.push_back(cell->key[1]);
    return ret;
}
vector <double> DstarLite:: getU_TopKey(){
    vector <double> ret;
    if(U.empty()){
        ret.push_back(INF);
        ret.push_back(INF);
        return ret;
    }
    DStarLiteCell *u = U.top();
    ret.push_back(u->key[0]);
    ret.push_back(u->key[1]);
    return ret;
}
void DstarLite:: removeElementFromU(DStarLiteCell *u){
    priority_queue<DStarLiteCell, vector<DStarLiteCell*>, CompareKey> tmp;
//    cout << " removeElementFromU(*u): " << u->y << "," << u->x <<endl;
//    cout <<"removeElementFromU Q size:"<< U.size()<<endl;
    while(!U.empty()){
        DStarLiteCell *v = U.top();
        U.pop();
        // cout <<"removeElementFromU " <<u->y<<","<<u->x <<endl;
//		cout <<"Queue is empty:" <<U.empty()<<endl;
//		cout <<"Queue size" <<U.size()<<endl;
        if(v->y == u->y && v->x == u->x){
//			cout << "remove mode in queue"<<endl;
            break;
        }else{
            tmp.push(v);
        }
    }
    while(!tmp.empty()){
        U.push(tmp.top());
        tmp.pop();
    }

}
void DstarLite::updateVertex(DStarLiteCell *u){
    cout << " updateVertex: " << u->y << "," << u->x << "; type:"<< u->type
         <<"; U.size:"<<U.size() <<endl;
    // if(u->x != start->x || u->y !=start->y) //06
    if(u->type != '6')
    {
        u->rhs = INF;
        //06
        for(int i = 0; i<DIRECTIONS; i++){
            DStarLiteCell *pred = u->predecessor[i];
            // cout << " ~~~~~~!"<<
            // " ; pred x,y: "<< pred->x << ","<<pred->y<<
            //  "pred->type:"<< pred->type<<
            // "; pred->g:"<< pred->g  <<endl;

            if(pred !=NULL && pred->type!='1'){
//				cout<< u->rhs << ","<< pred->g<<","<< u ->linkCost[i]<<endl;
                if( u->rhs > ( pred->g + u ->linkCost[i])){
//				cout << "xxxxxxxxx"<< endl;
                    u->rhs = pred->g + u -> linkCost[i];//06
                }
            }
        }
        cout << "!!!updateVertex g,hrs:" << u->g << "," << u->rhs<<endl;
    }
//	cout << "  remove before"  << u->y << ","<< u->x <<"; U.size:"<< U.size() <<endl;
    removeElementFromU(u);//07
//	bool is_in_U = removeElementFromU(u);
    cout <<"u->y,x:"<<  u->y << ","<< u->x
         // << " is_in_U :" <<is_in_U
         <<"; U.size:"<< U.size() <<endl;
//	cout << "remove after"  << u->y << ","<< u->x<<"; U.size:"<< U.size() <<endl;
    //08
    if(u->g != u->rhs){
//		cout << "updateVertex:u->g != u->rhs queue size : "<<U.size() <<endl;
        calcKey(u);
        U.push(u);
        cout << "updateVertex:u->g != u->rhs   after push to U  queue size : "<<U.size()
             << "; cell key0,key1:"<< u->key[0]<<","<<u->key[1]<<endl;
    }
    vertexAccess ++;
    if(U.size()>maxQLength){
        maxQLength = U.size();
    }

}
void DstarLite::computeShortestPath(){
    cout <<"DstarLite::computeShortestPath~!!!" << endl;
}