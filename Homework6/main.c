/*
 Author:      Victor J. Bezak III
 Net ID:      vjb170000
 Date:        October 28th, 2018
 Course:      CS 1337.001
 Assignment:  Homework 6
 
 Description:
 Will create 2 dynamic 8 int arrays from user input. Displays these arrays before,
 during, and after sorting--sorting array 1 with a bubble sort and array 2 with a
 selection sort.
 */


#include "stdio.h"
#include "stdlib.h"


// MAIN BEGIN
int main()
{
   int num1, num2, num3, num4, num5, num6, num7, num8;
   int *bblsort = NULL;    // Declare pointer for bubble sort dynamic array
   int *selectsort = NULL; // Declare pointer for selection sort dynamic array
   char pause;
   
   bblsort    = (int*)calloc(8, sizeof(int)); // Allocate memory for int array
   selectsort = (int*)calloc(8, sizeof(int)); // Allocate memory for int array
   
   puts("Please enter eight integers...");
   
   printf("int 1: ");
   scanf("%d", &num1);
   bblsort[0]    = num1;
   selectsort[0] = num1;
   
   printf("int 2: ");
   scanf("%d", &num2);
   bblsort[1]    = num2;
   selectsort[1] = num2;
   
   printf("int 3: ");
   scanf("%d", &num3);
   bblsort[2]    = num3;
   selectsort[2] = num3;
   
   printf("int 4: ");
   scanf("%d", &num4);
   bblsort[3]    = num4;
   selectsort[3] = num4;
   
   printf("int 5: ");
   scanf("%d", &num5);
   bblsort[4]    = num5;
   selectsort[4] = num5;
   
   printf("int 6: ");
   scanf("%d", &num6);
   bblsort[5]    = num6;
   selectsort[5] = num6;
   
   printf("int 7: ");
   scanf("%d", &num7);
   bblsort[6]    = num7;
   selectsort[6] = num7;
   
   printf("int 8: ");
   scanf("%d", &num8);
   bblsort[7]    = num8;
   selectsort[7] = num8;
   
   scanf("%c%*c", &pause);
   
   return 0;
} // MAIN END
