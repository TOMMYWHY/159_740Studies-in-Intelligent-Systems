/*---------------------------------------------------------------------- 
cart_pole: Takes an action (0 or 1) and the current values of the four 
state variables and updates their values by estimating the state TAU seconds later.
----------------------------------------------------------------------*/

#include "cartpole.h"




//cart_pole(action, x, x_dot, theta, theta_dot)
 
void cart_pole(int action,float *x, float *x_dot, float *theta,float *theta_dot){ 
	float xacc,thetaacc,force,costheta,sintheta,temp; 
	
	force = (action>0)? FORCE_MAG : -FORCE_MAG; 
	costheta = cos(*theta); 
	sintheta = sin(*theta); 
	temp = (force + POLEMASS_LENGTH * *theta_dot * *theta_dot * sintheta) / TOTAL_MASS; 
	thetaacc = (GRAVITY * sintheta - costheta* temp) / (LENGTH * (FOURTHIRDS - MASSPOLE * costheta * costheta / TOTAL_MASS));
	xacc = temp - POLEMASS_LENGTH * thetaacc* costheta / TOTAL_MASS;
	
	/*** Update the four state variables, using Euler's method. ***/ 
	*x += TAU * *x_dot; 
	*x_dot += TAU * xacc; 
	*theta += TAU * *theta_dot; 
	*theta_dot += TAU * thetaacc;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

