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

// PROTOYPES
void bblSort(int *array1);
void selectSort(int *array2);

// GLOBAL VARIABLES
int const SIZE = 8; // Because we know we will only be working with 8 ints


// MAIN BEGIN
int main()
{
   int *array1 = NULL; // Declare pointer for bubble sort dynamic array
   int *array2 = NULL; // Declare pointer for selection sort dynamic array
   int num; // To hold user value for array initialization
   
   array1 = (int*)calloc(SIZE, sizeof(int)); // Allocate memory for int array
   array2 = (int*)calloc(SIZE, sizeof(int)); // Allocate memory for int array
   
   
   
   puts("Please enter eight integers...");
   
   for(int i = 0; i < SIZE; i++) // Loop to grab all 8 ints from user
   {
      printf("int %d: ", (i + 1));
      scanf("%d", &num); // Get user num
      array1[i] = num;   // Put in array 1
      array2[i] = num;   // Put in array 2
   }
   
   puts("\nHere is your series sorted in ascending order with a bubble sort:");

   for(int i = 0; i < SIZE; i++, array1++) // Print series before sort
   {
      printf("%d", *array1); // Use of bracket notation
   }
   puts(""); // Add newline
   array1 -= (SIZE); // Reset array to beginning
   
   bblSort(array1); // Call bubble sort function
   
   puts("\nHere is your series sorted in ascending order with a selection sort:");
   
   for(int i = 0; i < SIZE; i++, array2++) // Print series before sort
   {
      printf("%d", *array2); // Use of bracket notation
   }
   puts(""); // Add newline
   array2 -= (SIZE); // Reset array to beginning
   
   selectSort(array2); // Call selection sort function
   
   return 0;
} // MAIN END


/***************************************************************************
 Header:  void bblSort(int *array1)
 
 Description:
 Takes series and prints it after every pass-through with a bubble sort.
***************************************************************************/
void bblSort(int *array1)
{
   int swap, swapHold;
   
   do
   {
      swap = 0;
      
      for(int i = 0; i < (SIZE - 1); i++)
      {
         if(array1[i] > array1[i + 1]) // If int is > than next int in series, swap them
         {
            swapHold = array1[i];       // Hold value A
            array1[i] = array1[i + 1]; // Put value B in place A
            array1[i + 1] = swapHold; // Put value A in place B
            
            swap = 1; // Set to true for another overall pass
         }
      }
      
      if(swap) // If the new series is different than the previous
      {
         for(int i = 0; i < SIZE; i++) // Print array after pass-through
            printf("%d", array1[i]);
         
         puts(""); // Add newline
      }
   } while(swap);
   
   free(array1);  // Clear memory that was allocated for array
   array1 = NULL; // Set pointer to null
}


/***************************************************************************
 Header:  void selectSort(int *array2)
 
 Description:
 Takes series and prints it after every pass-through with a bubble sort.
 ***************************************************************************/
void selectSort(int *array2)
{
   int scan, minIndex, minValue;
   int better; // 'better' will incrememnt if new lowest found
   
   for(scan = 0; scan < (SIZE - 1); scan++)
   {
      minIndex = scan;         // Hold the index of the smallest int
      minValue = array2[scan]; // Initialize minValue with starting int
      better = 0; // Reset to 0
      
      for(int i = (scan + 1); i < SIZE; i++)
      {
         if(array2[i] < minValue)
         {
            better++; // Lower value found
            minValue = array2[i];  // Grab value of new smallest int
            minIndex = i;          // Grab index position of new smallest int
         }
      }
      // Here we swap the first int with the smallest int
      array2[minIndex] = array2[scan]; // Move starting int to position where smallest int was
      array2[scan] = minValue;         // Place smallest int in the starting position
      
      if(scan != (SIZE - 2) || better) // Output new series unless last element and no change
      {
         for(int i = 0; i < SIZE; i++) // Print array after pass-through
            printf("%d", array2[i]);
      }
      puts(""); // Add newline
   }
   
   free(array2);  // Clear memory that was allocated for array
   array2 = NULL; // Set pointer to null
}
