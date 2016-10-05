#include <stdio.h>
#include <stdlib.h>

/* Very simple program to demonstrate reading a number from the command line.
* Usage:
*           ./num some_number
* Example:
*         ./num 2014
*
*/
int main (int argc, const char* argv[]) { /*Runs leap program*/
  int n; // Integer read from the command line goes here.

  if (argc < 2) { // Check that there was an entry
    printf("Must enter a number on the command line!\n");
    return 1; // Indicate failure
  }

  n = atoi(argv[1]); // Get string from command line; convert to int
  printf("The year you entered was: %d\n", n);

  if (n < 1752) { /*Check if this year is within the range which this program is designed to handles*/
    printf("This program cannot test the year %d.\
    \nIt only handles the year 1752 and after.\n", n);

  } else if (n % 4 == 0 & (n %100 !=0 || n % 400 == 0)) { /*Checks if this year is a leap year*/
    printf("This year is a leap year!\n" );
  } else {
    printf("This year is a common year!\n" );
  }

  return 0; // Indicate success!
}
