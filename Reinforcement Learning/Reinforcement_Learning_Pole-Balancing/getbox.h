/*---------------------------------------------------------------------- 
get_box: Given the current state, returns a number from 1 to 162 designating 
the region of the state space encompassing the current state. Returns a value 
of -1 if a failure state is encountered.
----------------------------------------------------------------------*/
#ifndef __GETBOX_H__
#define __GETBOX_H__

#define one_degree 0.0174532 /* 2pi/360 */
#define six_degrees 0.1047192
#define twelve_degrees 0.2094384
#define fifty_degrees 0.87266


//x,x_dot,theta,theta_dot
int get_box(float x, float x_dot, float theta, float theta_dot);
 
 
#endif
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

