/*
*File Name: lab1_exe_F.c
*Assignment: Lab 1 Exercise F
*Lab section: (B01)
*Completed by: Shanzi Ye
*Submission Date: May 10, 2021
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

const double G = 9.8;	/* gravitation acceleration 9.8 m/s^2 */ const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v); double Projectile_travel_distance(double a, double v); double degree_to_radian(double d);

int main(void)
{
int n;
double velocity;

printf ("Please enter the velocity at which the projectile is launched (m/sec): "); n = scanf("%lf" ,&velocity);

if(n != 1)
{
printf("Invlid input. Bye..."); 
exit(1);
}

while (velocity < 0 )
{
printf ("please enter a positive number for velocity: "); n = scanf("%lf", &velocity);

if(n != 1)
{
printf("Invlid input. Bye..."); 
exit(1);
}
}

create_table(velocity);
return 0;
}

void create_table(double v)
{

printf("Angle	t	d\n");
printf("(deg)	(sec)	(m)\n");


double angle = 0.000000; int i ; for(i=0;i<19;i++)
{
double totalTime = Projectile_travel_time(angle,v);
double totalDistance = Projectile_travel_distance(angle,v); printf("%.6lf\t%.6lf\t%.6lf\n",angle,totalTime,totalDistance); angle += 5.000000;
}

}

double degree_to_radian(double d)
{
double radian = d * PI/180;
return radian;
}

double Projectile_travel_time(double a, double v)
{
double radian = degree_to_radian(a); double time = 2*v*sin(radian)/G; 
return time;
}

double Projectile_travel_distance(double a, double v)
{
double radian = degree_to_radian(a);

double distance = pow(v,2)/G * sin(2*radian); 
return distance;
}


