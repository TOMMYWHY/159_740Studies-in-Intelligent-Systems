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
    //04
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            maze[i][j].g = INF;
            maze[i][j].rhs = INF;
            for (int k = 0; k < DIRECTIONS; k++) {
                maze[i][j].predecessor[k] = maze[i][j].move[k];
            }
        }
    }
//    double k_m=0;
    // Heuristic todo
    start = new DStarLiteCell;
    goal = new DStarLiteCell;

    //START VERTEX
    start->g = INF;
    start->rhs = INF;//04
    start->x = startX;
    start->y = startY;

    //GOAL VERTEX
    goal->g = INF;
    goal->rhs = 0.0;//05
    goal->x = goalX;
    goal->y = goalY;
    //---------------------
    maze[start->y][start->x].g = start->g;
    maze[start->y][start->x].rhs = start->rhs;

    maze[goal->y][goal->x].g = goal->g;
    maze[goal->y][goal->x].rhs = goal->rhs;
    //---------------------
    updateHValues();
    calcKey(&maze[goal->y][goal->x]);
    U.push(&maze[goal->y][goal->x]);//05
    cout << "priority Queue is empty : "<<U.empty()<<endl;
    cout << "priority Queue top : "<<getU_TopKey()[0]<<","<<getU_TopKey()[1]<<endl;
    cout << "priority Queue size : "<<U.size()<<endl;
    last = &maze[start->y][start->x];
    start = &maze[start->y][start->x];
    goal = &maze[goal->y][goal->x];

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

/*double DstarLite::calc_H(int x, int y){

    int diffY = abs(goal->y - y);
    int diffX = abs(goal->x - x);

    //maze[y][x].h = (double)maxValue(diffY, diffX);
    return (double)maxValue(diffY, diffX);
}*/

double DstarLite::calc_H(int x, int y){

    int diffY = abs(start->y - y);
    int diffX = abs(start->x - x);

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
    double key1, key2, min_value;
    min_value=minValue(maze[y][x].g, maze[y][x].rhs);
    key1 = min_value + maze[y][x].h + k_m; //
    key2 = min_value; //
}
void DstarLite::calcKey(DStarLiteCell *cell){
    double key1, key2,min_value;
    min_value=minValue(cell->g, cell->rhs);

    key1 = min_value + cell->h + k_m; //
    key2 = min_value;
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
    if(u->type != '7')//07
    {
        u->rhs = INF;
        //06
        for(int i = 0; i<DIRECTIONS; i++){
            DStarLiteCell *succ = u->move[i];
            // cout << " ~~~~~~!"<<
            // " ; pred x,y: "<< pred->x << ","<<pred->y<<
            //  "pred->type:"<< pred->type<<
            // "; pred->g:"<< pred->g  <<endl;

            if(succ !=NULL && succ->type!='1'){
//				cout<< u->rhs << ","<< pred->g<<","<< u ->linkCost[i]<<endl;
                if( u->rhs > ( succ->g + u ->linkCost[i])){
//				cout << "xxxxxxxxx"<< endl;
                    u->rhs = succ->g + u -> linkCost[i];//07
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
             << "; cell key0,key1:"<< u->key[0]<<","<<u->key[1]<<
             "; u->g:"<<u->g <<
             "; u->rhs:"<<u->rhs <<
             "; u->h:"<<u->h <<
             endl;
    }
 /*   vertexAccess ++;
    if(U.size()>maxQLength){
        maxQLength = U.size();
    }*/

}
void DstarLite::computeShortestPath(){
    cout <<"DstarLite::computeShortestPath~!!!" << endl;
    cout<< "---testing---"<<endl;
     DStarLiteCell *test_u = U.top();
    cout<<"goal to be u => g:"<<test_u->g<<
    "; rhs:"<<test_u->rhs<<
    "; h:"<<test_u->h<< "; y,x:"<<test_u->y<<","<<test_u->x<<
    "; tpye:"<<test_u->type<<endl;

    cout <<"getU_TopKey()[1]:"<<getU_TopKey()[1]<< endl;
    cout <<"calculateKey(&maze[start->y][start->x])[1]:"<<calculateKey(&maze[start->y][start->x])[1]<< endl;

    while(getU_TopKey()[0] < calculateKey(&maze[start->y][start->x])[0]||
          (
              getU_TopKey()[0]==calculateKey(&maze[start->y][start->x])[0] &&
              getU_TopKey()[1]<calculateKey(&maze[start->y][start->x])[1]
          )||
          maze[start->y][start->x].rhs != maze[start->y][start->x].g)//09
    {
        cout<< "; U.size:"<<U.size()<<endl;
        double k_old[2]={getU_TopKey()[0],getU_TopKey()[1]};
        DStarLiteCell *u = U.top();//12
        U.pop();//12
        //13
        if(k_old[0]<calculateKey(u)[0]||
        (k_old[0]==calculateKey(u)[0])&& k_old[1]<calculateKey(u)[1]){
            cout << "if : kold < calckey(u)"<<endl;
            U.push(u);
        }else if(u->g > u->rhs){
            cout << "else if:u->g > u->rhs"<<endl;
            u->g = u->rhs;//16
            for (int i = 0; i < DIRECTIONS; i++)//13
            {
                DStarLiteCell * pred = u->predecessor[i];
                // cout << " loop:"  <<i << " succ-type"<< succ->type <<"; y,x: "<< succ->y << "," << succ->x <<endl;
                if(pred!=NULL && pred->type !='1'){
                    updateVertex(pred);
                }
            }
        }else{
            cout << "else...."<<endl;
            u->g = INF;//15
            updateVertex(u);
            for (int i = 0; i < DIRECTIONS; i++)//16
            {
                DStarLiteCell * pred = u->predecessor[i];
                cout << "else loop:"  <<i << " pred-type"<< pred->type <<"; "<< pred->y << "," << pred->x <<endl;

                if(pred!=NULL && pred->type !='1'){
                    updateVertex(pred);
                }
            }
        }
    }
    cout <<"start:"<<start->y<<","<<start->x<< endl;
    cout <<"GOAL:"<<goal->y<<","<<goal->x<< endl;

}

void DstarLite::replanning(){

    int m;
    int argmin=INF;
    for (int i = 0; i < DIRECTIONS; i++) {
        DStarLiteCell * succ = start->move[i];
        //todo
        if(succ!=NULL && succ->type!='1' && succ->type!='9' &&
        argmin>(succ->g+start->linkCost[i])){
            m=i;
            argmin = succ->g + start->linkCost[i];
            cout <<"1111"<<"; m:"<<m  << "; argmin :" << argmin << endl;
        }
    }
    start=start->move[m];//27
    start->type = '6';
    cout << "start changed-----------:"<<start->x<<"," <<start->y <<endl;
    updateHValues();
    bool edgeChanged=false;
    for (int i = 0; i < DIRECTIONS; i++) {
        DStarLiteCell * succ = start->move[i];
        if(succ->type =='8'){
            cout << "change 8=>0 " <<endl;
            succ->type = '0';
        }
        if(succ->type =='9'){
            cout << "change 9=>1 " <<endl;
            // succ->type = '1';
            edgeChanged =true;
            break;
        }
    }
    if(edgeChanged){
         for (int i = 0; i < DIRECTIONS; i++) {
                cout << "222"<<endl;
                DStarLiteCell * succ = start->move[i];
                if(succ->type =='9'){
                    cout << "333 succ:"<<succ->x<<","<<succ->y <<endl;
                    maze[succ->y][succ->x].type='1';
                    k_m = k_m + calc_H(last->x,last->y);
                    last = start;
                    succ->type='1';
                    succ->g = INF;
                       cout << "4444  last:"<<last->x<<","<<last->y <<endl;
                    for (int j = 0; j < DIRECTIONS; j++) {
                         cout << "6666"<<endl;

                        DStarLiteCell * pred = succ->predecessor[i];
                         cout <<"pred:"<<pred->x <<","<< pred->y  <<endl;
                        if(pred->type=='0' || pred->type=='6' || succ->type=='7'|| succ->type=='8'){
                         cout << "777777"<<endl;

                            pred->linkCost[7-j]=INF;
                            updateVertex(pred);
                             cout << "888"<<endl;

                        }else{
                            cout <<"999"<<endl;
                        }
                    }
                }
            }
         computeShortestPath();

        }
        // computeShortestPath();
    
}


/*void DstarLite::replanning(){
    while(start->y != goal->y || start->x !=goal->x){
        replanning_one_step();
    }
}*/

void DstarLite::searching(){
//    computeShortestPath();
  /*  if(start->y != goal->y || start->x !=goal->x){
         cout << "searching replanning"<<endl;
        replanning();
         cout << "end searching replanning"<<endl;

    }
     cout <<"start:"<<start->y<<","<<start->x<< endl;
    cout <<"GOAL:"<<goal->y<<","<<goal->x<< endl;*/
    // computeShortestPath();

    while(start->y != goal->y || start->x !=goal->x){
        // cout << "searching replanning"<<endl;
        replanning();
        // computeShortestPath();

    }
      cout <<"start:"<<start->y<<","<<start->x<< endl;
    cout <<"GOAL:"<<goal->y<<","<<goal->x<< endl;

} // cout << "searching replanning"<<endl;