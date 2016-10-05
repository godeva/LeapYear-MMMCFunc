#include <stdio.h>
#include <stdlib.h>
#include "MMMProgram.h"
#define MAX_GRADE (20)/*Declaring Array at a constant size*/

int main (int argc, const char* argv[]) { /*Runs program*/
  int i; // Integer read from the command line goes here.
  int grades[MAX_GRADE]; //Defines and allocates the Array
  int numGrades = 0; //Tracks index on the Array to keep track of length


  if (argc < 2) { // check that there was an entry
    printf("Must enter grades on the command line!\n");
    return 1; //Indicate failure
  }

  for( int i = 0; i < (argc - 1); i++ )
  /*Checks numbers entered on the command line,
  termination when i is more than numbers entered
  minus first argc which is function name*/
  {
    if (i < MAX_GRADE) { /*Checks number of elements in an array that is less than given paramter MAX_GRADE (20)*/
      grades[i] = atoi(argv[i + 1]); /*takes each number and converts to integer to be stored in array*/
      numGrades++;
    }
  }

  if (argc-1 > MAX_GRADE) /*Checks if numbers entered reaches more than MAX_GRADE*/
  {
    printf("This program can only test a max number of %d grades\n", MAX_GRADE);
  }

  for (int h = 0; h < numGrades; h++) /*Keeps track of array length*/
  {
    printf(" %d \n", grades[h]);
  }

  /** meanMaxMinGrades: Calculate the average grade, max grade and lowest grade from list of grades.
  * @param arrayOfGrade list of grades given
  * @param numOfGrade Number of elements actually in the array
  * @return average grade of the given grades, maximum grade in list and minimum grade of list.
  */

  meanMaxMinGrades(grades, numGrades); /*Calls function from MMMProgram.C file to give the average, Max, and min of grades input*/
  return 0; // Indicate success!

}
