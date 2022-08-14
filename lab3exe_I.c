/*
* File Name: lab3_exe_I.c
* Assignment: Lab 3 Exercise I
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: May 24,2022
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "lab3exe_I.h"

int main(void) {
    char input_filename[30] = "D:/lab3exe_I.txt";
    char output_filename[30]= "lab3exe_I_output.txt";
    IntVector intVec;
    intVec.number_of_data = 0;
    
    read_text_file(&intVec, input_filename);
    
    //display_single_column(&intVec);
    
    display_multiple_column(&intVec, 4, output_filename);
    
    return 0;
}

void read_text_file (IntVector* vec, const char* input_filename){
    int nscan;
    FILE *fp = fopen (input_filename, "r");
    
    if(fp == NULL){
        fprintf(stdout, "Sorry cannot open the text file %s.\n", input_filename);
        exit(1);
    }
    
    do{
        nscan = fscanf(fp,"%d", &vec->storage[vec->number_of_data]);
        if(nscan == 1)
            (vec->number_of_data)++;
        else if (nscan != EOF){
            fprintf(stderr, "Invalid data in %s.\n", input_filename);
            exit(1);
        }
    }while ((nscan != EOF) & (vec->number_of_data < MAX_CAPACITY));
    
    fclose(fp);
}

void display_single_column(const IntVector* intV){
    int i;
    for (i = 0; i < intV ->number_of_data; i++ )
        printf("%10d\n", intV ->storage[i]);
}

void display_multiple_column(const IntVector *intV, int col, const char* output_filename)
{
    int a1 = intV->number_of_data / col;
    int a2 = intV->number_of_data % col;
    int i;
    int j;
    int arrayindex = 0;
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%10d", intV->storage[arrayindex]);
            arrayindex++;
        }
        printf("\n");
    }
    

    for (int k = 0; k<a2;k++)
    {
        printf("%10d",intV->storage[arrayindex]);
        arrayindex++;
    }
    // STUDENTS MUST COMPLETE THE DEFINITION OF THIS FILE
}

