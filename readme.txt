Name: Goutham Deva

Program Description: 

In the “assig1” folder, there are 13 files. Note: Objects files will not be included in this guide as all the descriptions would be simply compiled code from the corresponding code files.

Lab1: This file is an executable that prints a cheery message when you run it on the command line. It should print “Hello, World!” with the numbers from 1 to 15 each per line and finally printing “Goodbye!”. You can run the executable by typing ./lab1 on the command line. 

Lab1.c: This is human readable code file for Lab1. All the code from this file was compiled to create the executable.

Leap: This file is an executable that check whether the year you inputted is a leap year or common year. The program only accepts years from 1752 and after so anything before that will prompt the program to print "This program cannot test the year ____. It only handles the year 1752 and after”. You can run the executable by typing ./leap and the integer year next to it on the command line.

Leap.c: This is human readable code file for Leap. All the code from this file was compiled to create the executable.

Num: This file is an executable that reads the number of grades entered within the command prompt and return the list of grades entered, the average of those grades, the maximum value of the grades, and the lowest value of the grades. If the data type is not an integer then it prompts a message “Must enter grades on the command line!”. The program can only run 20 grades so inputting more than 20 grades will prompt the program to say "This program can only test a max number of 20 grades”. This is because we allocated 20 elements within an array called MAX_GRADE in num.c. You can run the executable by typing ./num and typing each grade on the command line.

Num.c: This is human readable code file for Num. All the code from this file was compiled to create the executable. The average, max, and min, value of the list of grades is calculated through a function called meanMaxMinGrades that is linked through the file MMMprogram.c and MMMprogram.h. Num.c contains code that checks whether an entry was made, whether number of grades entered is less than 20 otherwise prompt message, and is linked with MMMprogram to activate call function meanMaxMinGrades.

MMMprogram.c: This is the code file that runs the function meanMaxMinGrades. This function calculates the average grades, the maximum value of the grades, and the lowest value of the grades for the num file. In order to calculate these values, this file must be linked with num and MMMprogram.h.

MMMprogram.h: This is the header file and contains the function prototype. This requires the program MMMprogram.c to work since it’s needed when compiling a source file that uses a function from a different file. 

Makefile: Makefile takes all of the code files and compiles them so that they are ready to be used for the computer to read. In the contents of the file, makefile shows the files that that are told to be compiled and link together and cleaned. This include the files num.c, lab1.c, leap.c, and MMMprogram.c. To activate the contents of Makefile, type “make” on the command line which will allow the code files to be compiled to run the program. If you wish to un-compile the code files which removes the .o file, type “make clean” on the command prompt.

How to compile: 

Unzip the tar file and type "make" in the command prompt inside the assign1 directory. This will compile all the files in the folder as well as link MMMprogram header with the same named code file. If you wish to uncompile, type "make clean" and it will delete all the object files and leave you with the code files, MMMprogram header file and makefile.

Test Data:

Lab1: 

//Check if the program runs


Input: ./lab


What to Expect: 

Helllo, World!

1

2

3

4

5

6

7

8

9

10

11

12

13

14

15

Goodbye!

_________________________________________________________

Leap: 

//Check if it prompts message that program cannot test before year 1752

Input: ./leap 1000

What to Expect: The year you entered was: 1000

This program cannot test the year 1000.    

It only handles the year 1752 and after.


//Check if leap works

Input: ./leap 2000

What to Expect: The year you entered was: 2000

This year is a leap year!




//Check if it is a common year

Input: ./leap 2003


What to Expect: The year you entered was: 2003

This year is a common year!


//Check if leap detects rule where leap year if evenly divisible by 100 should also be divisible by 400. Should return common year for this example


Input: ./leap 1900

What to ExLab1: 

//Check if the program runs


Input: ./lab


What to Expect: 

Helllo, World!

1

2

3

4

5

6

7

8

9

10

11

12

13

14

15

Goodbye!

_________________________________________________________

Leap: 

//Check if it prompts message that program cannot test before year 1752

Input: ./leap 1000

What to Expect: The year you entered was: 1000

This program cannot test the year 1000.    

It only handles the year 1752 and after.


//Check if leap works

Input: ./leap 2000

What to Expect: The year you entered was: 2000

This year is a leap year!




//Check if it is a common year

Input: ./leap 2003


What to Expect: The year you entered was: 2003

This year is a common year!


//Check if leap detects rule where leap year if evenly divisible by 100 should also be divisible by 400. Should return common year for this example


Input: ./leap 1900

What to Expect: The year you entered was: 1900

This year is a common year!



//Check if no year is given

Input: ./leap

What to Expect: Must enter a number on the command line!

_________________________________________________________

Num: 

//Check if it there was an entry in the program

Input: ./num

What to Expect: Must enter grades on the command line!


//Checks if numbers entered reaches more than MAX_GRADE (20 in this example)

Input: ./num 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42

What to Expect: //Prompts limit message and prints first 20 input grades and calculates that average, min and max

This program can only test a max number of 20 grades

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

Average = 42

Max Grade = 42

Min Grade = 42


//Checks if numbers entered fits parameter

Input: ./num 20 40 50 90 90 100

What to Expect: //Prints all inputs, finds average, max, and min.

 20

 40

 50

 90

 90

 100

Average = 65

Max Grade = 100

Min Grade = 20



//Checks if 20 grades entered works

Input: ./num 20 40 50 90 90 100 10 10 90 100 89 90 19 45 17 90 90 90 90 90

What to Expect: //Prints all 20 inputs, finds average, max, and min.

 20

 40

 50

 90

 90

 100

 10

 10

 90

 100

 89

 90

 19

 45

 17

 90

 90

 90

 90

 90

Average = 65

Max Grade = 100

Min Grade = 10
pect: The year you entered was: 1900

This year is a common year!



//Check if no year is given

Input: ./leap

What to Expect: Must enter a number on the command line!

_________________________________________________________

Num: 

//Check if it there was an entry in the program

Input: ./num

What to Expect: Must enter grades on the command line!


//Checks if numbers entered reaches more than MAX_GRADE (20 in this example)

Input: ./num 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42 42

What to Expect: //Prompts limit message and prints first 20 input grades and calculates that average, min and max

This program can only test a max number of 20 grades

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

 42

Average = 42

Max Grade = 42

Min Grade = 42


//Checks if numbers entered fits parameter

Input: ./num 20 40 50 90 90 100

What to Expect: //Prints all inputs, finds average, max, and min.

 20

 40

 50

 90

 90

 100

Average = 65

Max Grade = 100

Min Grade = 20



//Checks if 20 grades entered works

Input: ./num 20 40 50 90 90 100 10 10 90 100 89 90 19 45 17 90 90 90 90 90

What to Expect: //Prints all 20 inputs, finds average, max, and min.

 20

 40

 50

 90

 90

 100

 10

 10

 90

 100

 89

 90

 19

 45

 17

 90

 90

 90

 90

 90

Average = 65

Max Grade = 100

Min Grade = 10




