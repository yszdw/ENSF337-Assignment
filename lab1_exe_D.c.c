/*
*File Name: lab1_exe_D.c
*Assignment: Lab 1 Exercise d
*Lab section: (B01)
*Completed by: Shanzi Ye
*Submission Date: May 10, 2022
*/

#include <stdio.h> 
#include <math.h> 
#define PI 3.14159265 
int main()
{
	double angle;
	printf("Please input angle in units of radians: "); scanf("%lf",&angle);
	
	double result_built_in = sin(angle);
	printf("The built-in sin(x) value is %lf \n",result_built_in);
	
	double result_taylorseries_expression = angle - pow(angle,3)/(1*2*3) + pow(angle,5)/(1*2*3*4*5) - pow(angle,7)/(1*2*3*4*5*6*7);
	//printf("The taylor series of sin value is %lf \n",result_taylorseries_expression );

	double degree = angle * 180 / PI;
	printf("%.1lf radians (approximately %.2lf degrees) of sin value is %.2lf\n",angle,degree,result_taylorseries_expression ); 

return 0;
}
