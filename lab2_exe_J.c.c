/*
*File Name: lab2_exe_J.c
*Assignment: Lab 1 Exercise J
*Lab section: (B01)
*Completed by: Shanzi Ye
*Submission Date: May , 2021
*/

#include <stdio.h> 
#include <stdlib.h>

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);


int main(void)
{
int millisec; int minutes; double seconds; int nscan;

printf("Enter a time interval as an integer number of milliseconds: "); nscan = scanf("%d", &millisec);

if (nscan != 1) {

printf("Unable to convert your input to an int.\n"); 
exit(1);
}

printf("Doing conversion for input of %d ms ... \n", millisec);

/* MAKE A CALL TO time_convert HERE. */ 
time_convert(millisec,&minutes,&seconds);
printf("That is equivalent to %d minute(s) and %.2f second(s).\n", minutes, seconds);

return 0;
}

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr)
{
int t_minutes= ms_time / (1000 * 60);
double remainder_millisec = ms_time % (1000 * 60); double t_seconds= remainder_millisec / 1000;
*minutes_ptr = t_minutes;
*seconds_ptr = t_seconds;
}