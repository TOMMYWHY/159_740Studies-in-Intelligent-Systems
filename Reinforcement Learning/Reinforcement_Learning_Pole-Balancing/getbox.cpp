/*---------------------------------------------------------------------- 
get_box: Given the current state, returns a number from 1 to 162 designating 
the region of the state space encompassing the current state. Returns a value 
of -1 if a failure state is encountered.
----------------------------------------------------------------------*/
#include "getbox.h"


//x,x_dot,theta,theta_dot
int get_box(float x, float x_dot, float theta, float theta_dot){ 
	
	int box=0;
	
	if (x < -2.4 || x > 2.4 || 
		theta < -twelve_degrees || 
	   theta > twelve_degrees) 
	
	  return(-1); /* to signal failure */

	
	 if (x < -0.8) 
		 box = 0; 
	 else if (x < 0.8) 
		 box = 1; 
	 else box = 2;
		 
	 if (x_dot < -0.5) ;  //do nothing
	 else if (x_dot < 0.5) 
		 box += 3; 
	 else 
		 box += 6;
	 
	 ////////////////////////////////
	 
	 if (theta < -six_degrees) ; //do nothing
	 else if (theta < -one_degree) 
		 box += 9; 
	 else if (theta < 0) 
		 box += 18; 
	 else if (theta < one_degree) 
		 box += 27; 
	 else if (theta < six_degrees) 
		 box += 36; 
	 else box += 45;
	
    ///////////////////////////////////////	 
	 if (theta_dot < -fifty_degrees) ; //do nothing
	 else if (theta_dot < fifty_degrees) 
		 box += 54; 
	 else box += 108;
		 
	return(box);
 }
 

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

