#include <stdio.h>
#include <stdlib.h>
#include "MMMProgram.h"

#define MAX_GRADE (20)/*Declaring Array at a constant size*/

/** meanMaxMinGrades: Calculate the average grade, max grade and lowest grade from list of grades.
* @param arrayOfGrade list of grades given
* @param numOfGrade Number of elements actually in the array
* @return average grade of the given grades, maximum grade in list and minimum grade of list.
*/

void meanMaxMinGrades (int arrayOfGrade[], int numOfGrades) { /*Runs meanMaxMinGrades function*/
  int n,i,j; //Integers read from command line
  int grades[MAX_GRADE]; //D  return 0; efines and allocates the Array
  int numGrades = 0; //Tracks index on the Array to keep track of length
  int sum = 0, average, Max = arrayOfGrade[0], Min = arrayOfGrade[0];

  for(n=0; n < numOfGrades; ++n) //Checks inputed elements and terminates when checking number of grades entered
  {
    sum = sum + arrayOfGrade[n]; //Adds all integer type grades entered
  }
  average=sum/numOfGrades; /*Takes sum of all grades added and divides number of grades given to get average */
  printf("Average = %d\n",average);

  for(i=0; i < numOfGrades; ++i) { //Checks inputed elements and terminates when checking number of grades entered
    if(arrayOfGrade[i]>Max) /*Checks each element in array and stores value if element is larger then previous element*/
    Max=arrayOfGrade[i];
  }
  printf("Max Grade = %d\n", Max);

  for(j=0; j < numOfGrades; ++j) { /*Checks each element in array and stores value if element is less then previous element*/
    if(arrayOfGrade[j]<Min)
    Min=arrayOfGrade[j];
  }
  printf("Min Grade = %d\n", Min);

}
