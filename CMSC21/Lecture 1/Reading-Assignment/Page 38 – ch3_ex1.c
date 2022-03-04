/*C program that displays variables of
type int and type float*/

#include <stdio.h> /*This line contains a directive which states
  that <stdio.h is to be included because C has no built-
  in read ans write commands*/
 
int main (void) /*This line indicates that 
the return type of function main is void therefore,
it does not return any value.*/
{
	/*Here are the statements of the program.*/
	
    /*This part of the program is where
	 variables are declared.*/
	int i, j; //variables i & j are declared as int type; stores integer value
    float x, y; //variables i & j are declared as float; stores floating point numbers

	/*This part of the program is where
	 variables are given a value.*/
    i = 10; //variable i is assigned the value of 10
    j = 20; //variable j is assigned the value of 20

	/*The variables x and y are given numbers with a decimal point. 
	 They are also declared as float type thus adding "f" at the
	 end of the given values.*/
    x = 43.2892f; 
    y = 5527.0f;

/*The function calls the printf function to display this string on the screen.
% is a placeholder, indicating where the values of the variables should appear.
The variables should be in the same order as where they are called with their
declared variable type so that is correct and working properly.*/
printf ("i = %d, j =%d,  x = %f , y = %f\n", i,  j, x, y);

}
