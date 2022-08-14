/*
* File Name: lab2_exe_D.c
* Assignment: Lab 2 Exercise D
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: May 17, 2022
*/

#include <stdio.h>
#include <stdlib.h>

void pascal_triangle(int n);
/* REQUIRES: n > 0 and n <= 20
 PROMISES: displays a pascal_triangle. the first 5 line of the function's output
 should have the following format:
 row 0:  1
 row 1:  1   1
 row 2:  1   2   1
 row 3:  1   3   3   1
 row 4:  1   4   6   4   1
 */

int main() {
    int nrow;
    // These are ALL of the variables you need!
    printf("Enter the number of rows (Max 20): ");
    scanf("%d", &nrow);
    if(nrow <= 0 || nrow > 20) {
        printf("Error: the maximum number of rows can be 20.\n");
        exit(1);
    }
    
    pascal_triangle(nrow);
    return 0;
}

void pascal_triangle(int n) {
    // STUDENTS MUST COMPLETE THE REST OF IMPLEMENATION OF THIS FUNCTION
  int current_array[20] = { 1,0 };
  int iLayer,iCol;
  int iPrevLValue, iPrevRValue;
  for (iLayer = 0; iLayer < n; iLayer++)
  {
        printf("row:%-4d", iLayer);
        iPrevLValue = 0;
        for (iCol = 0; iCol <= iLayer; iCol++)
        { 			 
              iPrevRValue = current_array[iCol];
              current_array[iCol] = iPrevLValue + iPrevRValue;
              printf("%-9d", current_array[iCol]);
              iPrevLValue = iPrevRValue;
         }
         printf("\n");
   }
}
