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
	// cout << "key1:" << key1 << " ; key2: " << key2<<endl;
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

/*=======++++++++++++++=========*/
//01
double* LpaStar::calculateKey(LpaStarCell *cell){
	calcKey(cell);
	static double ret[2] = {cell->key[0],cell->key[1]};
	return ret;
}

double* LpaStar:: getU_TopKey(){
	if(U.empty()){
	   static double ret[2] = {INF,INF};
		 return ret;
	}
	LpaStarCell *u = U.top();
	static double ret[2] = {u->key[0],u->key[1] } ;
	return ret;
}
void LpaStar:: removeElementFromU(LpaStarCell *u){
    priority_queue<LpaStarCell, vector<LpaStarCell*>, CompareKey> tmp;
    cout << " removeElementFromU(*u): " << u->y << "," << u->x <<endl;
    cout <<"removeElementFromU Q size:"<< U.size()<<endl;
	while(!U.empty()){
		LpaStarCell *v = U.top();
		U.pop();
		// cout <<"removeElementFromU " <<u->y<<","<<u->x <<endl;
		cout <<"Queue is empty:" <<U.empty()<<endl;
		cout <<"Queue size" <<U.size()<<endl;
		if(v->y == u->y && v->x == u->x){
			cout << "remove mode in queue"<<endl;
			break;
		}
		tmp.push(v);

	}
	while(!tmp.empty()){
	    U.push(tmp.top());
	    tmp.pop();
	}

}

void LpaStar::updateVertex(LpaStarCell *u){
	cout << " updateVertex: " << u->y << "," << u->x <<endl;
	if(u->x != start->x || u->y !=start->y) //06
	{
		cout << "dashabi~!!!!!"<< endl;

		u->rhs = INF;
		//06
		for(int i = 0; i<DIRECTIONS; i++){
			LpaStarCell *pred = u->predecessor[i];
			cout << "zhendema ~~~~~~!"<< "pred->type:pred->type"<< pred->type <<endl;

			/*if(pred !=NULL && pred->type!='1' && u->rhs > pred->g + u ->linkCost[i] )//TODO
			{
				cout << "woshinidaye"<< endl;
				u->rhs = pred->g + u -> linkCost[i];//06
			}*/
			if(pred !=NULL && pred->type!='1'){
				cout << "woshinidaye"<< endl;
				cout<< u->rhs << ","<< pred->g<<","<< u ->linkCost[i]<<endl;
				if( u->rhs > ( pred->g + u ->linkCost[i])){
				cout << "xxxxxxxxx"<< endl;
				u->rhs = pred->g + u -> linkCost[i];//06

				}	
			}
		}
		cout << "!!!updateVertex g,hrs:" << u->g << "," << u->rhs<<endl;
	}
	cout << "  remove before"  << u->y << ","<< u->x <<"; U.size:"<< U.size() <<endl;
	removeElementFromU(u);//07
	cout << "remove after"  << u->y << ","<< u->x <<endl;
	//08
	if(u->g != u->rhs){
		cout << "updateVertex:u->g != u->rhs queue size : "<<U.size() <<endl;
		calcKey(u);
		U.push(u);
		cout << "updateVertex:u->g != u->rhs   after push to U  queue size : "<<U.size() <<endl;
	}
	vertexAccess ++;
	if(U.size()>maxQLength){
		maxQLength = U.size();
	}

}

void LpaStar::computeShortestPath(){
	cout << "computeShortestPath now"  <<endl;
	cout<< "----- start.rhs:"<<start->rhs<<endl;
	// calcKey(maze[start->y][start->x]);

	vertexAccess=0;
    cout <<"getU_TopKey()[0]:"<<getU_TopKey()[0]<<endl;
    cout<< "start g:" << maze[start->y][start->x].g<<endl;//inf
    cout<< "start rhs:" << maze[start->y][start->x].rhs<<endl;//0


	while(getU_TopKey()[0] < calculateKey(&maze[goal->y][goal->x])[0]||
	(getU_TopKey()[0] == calculateKey(&maze[goal->y][goal->x])[0] &&
	getU_TopKey()[1]<calculateKey(&maze[goal->y][goal->x])[1])||
	maze[goal->y][goal->x].rhs != maze[goal->y][goal->x].g)//09
	{
        LpaStarCell *u = U.top();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << maze[i][j].g <<" , ";
                cout << maze[i][j].rhs <<" ; ";
            }
            cout <<endl;
        }
        U.pop();//10
        if(u->g > u->rhs)//11
        {
            cout << " u-> x,y:"  << u->y << ","<< u->x <<endl;
            u->g = u->rhs;//12
            for (int i = 0; i < DIRECTIONS; i++)//13
            {
                LpaStarCell * succ = u->move[i];
                cout << " loop"  <<i << " succ-type"<< succ->type <<"; "<< succ->y << "," << succ->x <<endl;
                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }
            cout << "DIRECTIONS done"<<endl;

        }
        else{//14
        	cout << "else...."<<endl;
            u->g = INF;//15
            updateVertex(u);

            for (int i = 0; i < DIRECTIONS; i++)//16
            {
                LpaStarCell * succ = u->move[i];
                cout << "else loop"  <<i << " succ-type"<< succ->type <<"; "<< succ->y << "," << succ->x <<endl;

                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }
        }
    }
}



