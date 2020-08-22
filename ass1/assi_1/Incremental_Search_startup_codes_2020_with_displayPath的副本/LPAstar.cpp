#include <stdio.h>
#include <iostream>
#include <stdlib.h>     /* calloc, exit, free */
#include <math.h>  //sqrt, pow

#include "LPAstar.h"
#include "gridworld.h"


 LpaStar::LpaStar(int rows_, int cols_){
		 rows = rows_;
	    cols = cols_;
	 
		 //Allocate memory 
		 maze.resize(rows);
		 for(int i=0; i < rows; i++){
		   maze[i].resize(cols);
		 }
}

void LpaStar::initialise(int startX, int startY, int goalX, int goalY){
    //03
	for(int i=0; i < rows; i++){
	   for(int j=0; j < cols; j++){
		   maze[i][j].g = INF;
			maze[i][j].rhs = INF;
		}
	}
	start = new LpaStarCell;
	goal = new LpaStarCell;
	
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

double LpaStar::minValue(double g_, double rhs_){
	if(g_ <= rhs_){
		return g_;
	} else {
		return rhs_;
	}	
}

int LpaStar::maxValue(int v1, int v2){
	
	if(v1 >= v2){
		return v1;
	} else {
		return v2;
	}	
}

double LpaStar::calc_H(int x, int y){
	
	int diffY = abs(goal->y - y);
	int diffX = abs(goal->x - x);
	
	//maze[y][x].h = (double)maxValue(diffY, diffX);
	return (double)maxValue(diffY, diffX);
}

void LpaStar::updateHValues(){
	for(int i=0; i < rows; i++){
	   for(int j=0; j < cols; j++){
		   maze[i][j].h = calc_H(j, i);
		}
	}
	
	start->h = calc_H(start->x, start->y);
	goal->h = calc_H(goal->x, goal->y);
}

void LpaStar::calcKey(int x, int y){
	double key1, key2;
	
	key2 = minValue(maze[y][x].g, maze[y][x].rhs);
	key1 = key2 + maze[y][x].h;
}


void LpaStar::calcKey(LpaStarCell *cell){
	double key1, key2;
	
	key2 = minValue(cell->g, cell->rhs);
	key1 = key2 + cell->h;
	
	cell->key[0] = key1;
	cell->key[1] = key2;
}

void LpaStar::updateAllKeyValues(){	
	for(int i=0; i < rows; i++){
	   for(int j=0; j < cols; j++){
		   calcKey(&maze[i][j]);
		}
	}
	
	calcKey(start);
	calcKey(goal);
}

/*================*/
double* LpaStar::CalculateVertexKeyValue(LpaStarCell *cell){
	calcKey(cell);
	static double ret[2] = {cell->key[0],cell->key[1]};
	return ret;
}

double* LpaStar:: getUTopkey(){
	if(U.empty()){
		static double ret[2] = {INF,INF};
		return ret;
	}
	LpaStarCell *u = U.top();
	static double ret[2] = {u->key[0],u->key[1] } ;
	return ret;
}
void LpaStar:: removeElementInU(LpaStarCell *u){
	priority_queue<LpaStarCell,vector<LpaStarCell*>,CompareKey> temp;//todo
	cout <<"removeElementInU *u" << u->y <<","<< u->x <<endl;
	cout <<"Queue size" <<U.size()<<endl;
	while(!U.empty()){
		LpaStarCell *v = U.top();
		U.pop();
		cout <<"removeElementInU " <<u->y<<","<<u->x <<endl;
		cout <<"Queue is empty:" <<U.empty()<<endl;
		cout <<"Queue size" <<U.size()<<endl;
		if(v->y == u->y && v->x == u->x){
			cout << "remove mode in queue"<<endl;
			break;
		}

	}
	//todo
	while(!U.empty()){
		U.push(temp.top());
		temp.pop();
	}
}

void LpaStar::updateVertex(LpaStarCell *u){
	cout << "start updateVertex " << u->y << "," << u->x <<endl;
	if(u->x != start->x || u->y !=start->y) //06
	{
		u->rhs = INF;
		//06
		for(int i = 0; i<DIRECTIONS; i++){
			LpaStarCell *pred = u->predecessor[i];
			cout << "start update vertex step1 pred type" <<i<<" ; " << pred->type<< endl;
			if(pred !=NULL && pred->type!='1' && u->rhs >  pred->g + u ->linkCost[i] )//TODO
			{
			cout << "start update vertex step1 pred" <<i<<" ; " << pred->g <<" "<< u->linkCost[i] <<endl;
				u->rhs = pred->g + u -> linkCost[i];//06
			}
		}
		cout << "start update vertex step1 rhs"<< u->rhs <<endl;
		cout << "start update vertex step1 g"  << u->g   <<endl;
	}
	cout << "start update vertex step2 "  << u->y << ","<< u->x <<endl;
	removeElementInU(u);//07
	cout << "start update vertex step3 "  << u->y << ","<< u->x <<endl;
	//08
	if(u->g != u->rhs){
		cout << "queue size : "<<U.size() <<endl;
		calcKey(u);
		U.push(u);
		cout << "queue size : "<<U.size() <<endl;
	}
	vertexAccess ++;
	if(U.size()>maxQLength){
		maxQLength = U.size();
	}

}

void LpaStar::computeShortestPath(){
	cout << "computeShortestPath now"  <<endl;
	vertexAccess=0;
	while(getUTopkey()[0] < CalculateVertexKeyValue(&maze[goal->y][goal->x])[0]||
	(getUTopkey()[0] == CalculateVertexKeyValue(&maze[goal->y][goal->x])[0] &&
	getUTopkey()[1]<CalculateVertexKeyValue(&maze[goal->y][goal->x])[1])||
	maze[goal->y][goal->x].rhs != maze[goal->y][goal->x].g)//09
	{
        LpaStarCell *u = U.top();
        U.pop();//10
        if(u->g > u->rhs)//11
        {
            cout << "start while loop in con vertex condition 1 "  << u->y << ","<< u->x <<endl;
            u->g = u->rhs;
            for (int i = 0; i < DIRECTIONS; i++)//13
            {
                LpaStarCell * succ = u->move[i];
                cout << "start while loop in con vertex condition 1 loop"  <<i << " succ-type"<< succ->type <<"; "<< succ->y << "," << succ->x <<endl;
                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }

        }
        else{//14
            cout << "start while loop in con vertex condition 2 "  << u->y << ","<< u->x <<endl;
            u->g = INF;//15
            updateVertex(u);

            for (int i = 0; i < DIRECTIONS; i++)//16
            {
                LpaStarCell * succ = u->move[i];
                cout << "start while loop in con vertex condition 2 loop"  <<i << " succ-type" << succ->type <<"; "<< succ->y << "," << succ->x <<endl;
                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }
        }
    }
	cout << "vertex accesses"<< vertexAccess <<endl;
	cout << "Max Q length"<< maxQLength <<endl;
}



