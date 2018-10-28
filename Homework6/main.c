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


// MAIN BEGIN
int main()
{
   int num;
   char pause;
   
   printf("Please enter a number: ");
   scanf("%d", &num);
   
   printf("Hello, World! We got a %d!\n", num);
   
   scanf("%c%*c", &pause); // To pause while a dangling newline is present
   
   return 0;
} // MAIN END
