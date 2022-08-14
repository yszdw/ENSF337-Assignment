/*
*File Name: lab2_exe_I.c
*Assignment: Lab 2 Exercise I
*Lab section: (B01)
*Completed by: Shanzi Ye
*Submission Date: May 17, 2022
*/

#include <stdio.h>
#define ELEMENTS(arrayname)	sizeof(arrayname)/sizeof(arrayname[0]) 
int main()
{

int size;
int a[] = {45, 67, 89, 24, 54};
double b[20] = {14.5, 61.7, 18.9, 2.4, 0.54}; 
size = ELEMENTS(a);

printf("Array a has 5 elements and macro ELEMENTS returns %d\n", size); 
size = ELEMENTS(b);

printf("Array b has 20 elements and macro ELEMENTS returns %d\n", size);

return 0;
}
