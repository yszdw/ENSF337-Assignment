/*
* File Name: lab3_exe_I.c
* Assignment: Lab 3 Exercise I
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: May 24,2022
*/

#ifndef lab3ExI_h
#define lab3ExI_h

#define MAX_CAPACITY 100

typedef struct IntVector
{
    int storage[MAX_CAPACITY];
    int number_of_data;
} IntVector;


void read_text_file (IntVector * vec, const char* filename);
/* REQUIRES: intV points to an existing array of IntVector.
 * PROMISES: opens a text file with the given name by filename string.
 *           Reads the integer values in the text file into storage array in *vec
 */


void display_single_column(const IntVector *intV);
/* REQUIRES: intV points to an existing array of IntVector.
 * PROMISES: displays data in each element of storage array, in intV, into the
 *           on the screen, in a single column.
 */


void display_multiple_column(const IntVector *intV, int col, const char* filename);
/* REQUIRES: intV points to an existing array of IntVector. col > 0.
 * PROMISES: opens a text file with the given name by the string filename, and
 *           saves the data in each element of storage array in intV, into the
 *           text file, in tabular format (col columns).
 *           If col is greater than number of data in the array, the number of saved
 *           columns in the file, will be the number of data in the array.
 */

#endif 
