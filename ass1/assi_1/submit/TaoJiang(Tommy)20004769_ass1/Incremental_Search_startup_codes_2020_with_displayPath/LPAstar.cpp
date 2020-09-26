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
    //todo: pseudocode 03
    for(int i=0; i < rows; i++){
	   for(int j=0; j < cols; j++){
		   maze[i][j].g = INF;
			maze[i][j].rhs = INF;
           for (int k = 0; k < DIRECTIONS; k++) {
               maze[i][j].predecessor[k] = maze[i][j].move[k];
           }
		}
	}
	start = new LpaStarCell;
	goal = new LpaStarCell;
	
	//START VERTEX
	start->g = INF;
	start->rhs = 0.0;// todo: pseudocode 04
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
	U.push(&maze[start->y][start->x]);//todo: pseudocode 05
//	cout << "priority Queue is empty : "<<U.empty()<<endl;
//	cout << "priority Queue top : "<<getU_TopKey()[0]<<","<<getU_TopKey()[1]<<endl;
//	cout << "priority Queue size : "<<U.size()<<endl;
	start = &maze[start->y][start->x];
	goal = &maze[goal->y][goal->x];

   
	vertexAccess=0;
    maxQLength=0;
    state_expansions = 0;

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
	double result;
	if(HEURISTIC ==MANHATTAN){
        int diffY = abs(goal->y - y);
        int diffX = abs(goal->x - x);
        result = (double)maxValue(diffY, diffX);

    }
	 if(HEURISTIC==EUCLIDEAN){
        int diffY=goal->y-y;
        int diffX=goal->x-x;
        result = (double)sqrt(diffY*diffY+ diffX*diffX);
    }
	//maze[y][x].h = (double)maxValue(diffY, diffX);
	return result;
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
//todo: pseudocode 01
vector <double> LpaStar::calculateKey(LpaStarCell *cell){
	vector <double> ret;
    calcKey(cell);
	ret.push_back(cell->key[0]);
	ret.push_back(cell->key[1]);
	return ret;
}

vector <double> LpaStar:: getU_TopKey(){
    vector <double> ret;
    if(U.empty()){
        ret.push_back(INF);
        ret.push_back(INF);
		 return ret;
	}
	LpaStarCell *u = U.top();
    ret.push_back(u->key[0]);
    ret.push_back(u->key[1]);
	return ret;
}

void LpaStar:: removeElementFromU(LpaStarCell *u){
    priority_queue<LpaStarCell, vector<LpaStarCell*>, CompareKey> tmp;
//    cout << " removeElementFromU(*u): " << u->y << "," << u->x <<endl;
//    cout <<"removeElementFromU Q size:"<< U.size()<<endl;
	while(!U.empty()){
		LpaStarCell *v = U.top();
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



void LpaStar::updateVertex(LpaStarCell *u){
	cout << " updateVertex: " << u->y << "," << u->x << "; type:"<< u->type
	<<"; U.size:"<<U.size() <<endl;
	if(u->type != '6') //todo: pseudocode 06
    {
		u->rhs = INF;
        //todo: pseudocode 06
		for(int i = 0; i<DIRECTIONS; i++){
			LpaStarCell *pred = u->predecessor[i];
/*			// cout << " ~~~~~~!"<<
			// " ; pred x,y: "<< pred->x << ","<<pred->y<<
			//  "pred->type:"<< pred->type<<
			// "; pred->g:"<< pred->g  <<endl;*/
			if(pred !=NULL && pred->type!='1'){
//				cout<< u->rhs << ","<< pred->g<<","<< u ->linkCost[i]<<endl;
				if( u->rhs > ( pred->g + u ->linkCost[i])){
//				cout << "xxxxxxxxx"<< endl;
				u->rhs = pred->g + u -> linkCost[i]; //todo: pseudocode 06
				}
			}
		}
//		cout << "!!!updateVertex g,hrs:" << u->g << "," << u->rhs<<endl;
	}
//	cout << "  remove before"  << u->y << ","<< u->x <<"; U.size:"<< U.size() <<endl;
	removeElementFromU(u); //todo: pseudocode 07
//	bool is_in_U = removeElementFromU(u);
//	cout <<"u->y,x:"<<  u->y << ","<< u->x
	 // << " is_in_U :" <<is_in_U 
//	 <<"; U.size:"<< U.size() <<endl;
//	cout << "remove after"  << u->y << ","<< u->x<<"; U.size:"<< U.size() <<endl;
	// todo: pseudocode 08
	if(u->g != u->rhs){
//		cout << "updateVertex:u->g != u->rhs queue size : "<<U.size() <<endl;
		calcKey(u);
		U.push(u);// todo: pseudocode 08
//		cout << "updateVertex:u->g != u->rhs   after push to U  queue size : "<<U.size()
//		<< "; cell key0,key1:"<< u->key[0]<<","<<u->key[1]<<endl;
	}
	vertexAccess ++;
	if(U.size()>maxQLength){
		maxQLength = U.size();
	}

}

void LpaStar::computeShortestPath(){
	cout << "computeShortestPath now"  <<endl;
//	cout<< "----- start.rhs:"<<start->rhs<<endl;
	vertexAccess=0;
     state_expansions = 0;
/*//    cout <<"getU_TopKey()[0]:"<<getU_TopKey()[0] <<"; getU_TopKey()[1]:" << getU_TopKey()[1]<<endl;
//    cout<< "start g:" << maze[start->y][start->x].g<<endl;//inf
//    cout<< "start rhs:" << maze[start->y][start->x].rhs<<endl;//0*/
// todo: pseudocode 09
	while(getU_TopKey()[0] < calculateKey(&maze[goal->y][goal->x])[0]||
	(
		 getU_TopKey()[0]==calculateKey(&maze[goal->y][goal->x])[0] &&
		 getU_TopKey()[1]<calculateKey(&maze[goal->y][goal->x])[1])||
	maze[goal->y][goal->x].rhs != maze[goal->y][goal->x].g)//09
	{
//        cout<< "; U.size:"<<U.size()<<endl;
        LpaStarCell *u = U.top();
        U.pop();// todo: pseudocode 10
        if(u->g > u->rhs)// todo: pseudocode 11
        {
/*//            cout << "selected--- u-> y,x:"  << u->y << ","<< u->x <<"; u->h:"<<u->h <<
//            "; u->key0,key1:"<<u->key[0] <<","<<u->key[1]<<
//            "; U.size:"<<U.size()<<endl;*/
            u->g = u->rhs;// todo: pseudocode 12
            for (int i = 0; i < DIRECTIONS; i++)// todo: pseudocode 13
            {
                LpaStarCell * succ = u->move[i];
                // cout << " loop:"  <<i << " succ-type"<< succ->type <<"; y,x: "<< succ->y << "," << succ->x <<endl;
                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }
//            cout << "DIRECTIONS 8 done; U size : "<< U.size()<<endl;
        }
        else{// todo: pseudocode 14
//        	cout << "else...."<<endl;
            u->g = INF;//15
            updateVertex(u);

            for (int i = 0; i < DIRECTIONS; i++)// todo: pseudocode 16
            {
                LpaStarCell * succ = u->move[i];
//                cout << "else loop:"  <<i << " succ-type"<< succ->type <<"; "<< succ->y << "," << succ->x <<endl;
                if(succ!=NULL && succ->type !='1'){
                    updateVertex(succ);
                }
            }
        }
        state_expansions ++;
    }
	cout << "vertex Accesses : " << vertexAccess<<endl;
	cout << "Max Q length : " << maxQLength<<endl;
	cout << "No. of state expansions : " << state_expansions <<endl;
}

void LpaStar::replanning() {
    vertexAccess=0;
    state_expansions = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            //todo: pseudocode 21
            if(maze[i][j].type == '8' && maze[i][j].g!=INF)
            {
//                cout << "change 8=>0 " <<endl;
                maze[i][j].type='0';
            }
            if(maze[i][j].type == '9' && maze[i][j].g!=INF){
//                cout << "change 9=>1 " <<endl;
                maze[i][j].type='1';
                maze[i][j].g=INF;
                for (int k = 0; k < DIRECTIONS; k++) {
                    LpaStarCell* succ = maze[i][j].move[k];
                    if(succ->type=='0' || succ->type=='8' || succ->type=='6' || succ->type=='7'){
                        succ->linkCost[7-k]= INF;
                        updateVertex(succ);   //todo: pseudocode 23
                    }
                }
            }
        }
    }
    cout << "vertex Accesses : " << vertexAccess<<endl;
    cout << "Max Q length : " << maxQLength<<endl;
    cout << "No. of state expansions : " << state_expansions <<endl;

}

bool LpaStar::has_unknown_grids(){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(maze[i][j].g!=INF && (maze[i][j].type=='8'||maze[i][j].type=='9')){
                return true;
            }
        }
    }
    return false;
}

void LpaStar::searching(){
    computeShortestPath();
    while (has_unknown_grids()){
        replanning();
        computeShortestPath();
    }
}