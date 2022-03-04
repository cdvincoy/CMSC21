/*prints int and float values in various formats*/

#include <stdio.h> /*The required starting line for a C program.*/

int main(void) /*This function main is void, therefore it does
not return anything.*/
{
	int i; //declaring the variable i as int type
	float x; //declaring the varibale x as float type
	
	i = 40; //assigning i with the value of 40
	x = 839.21f; //assigning x with the value of 839.21
	//f is necessary to add because it has a decimal point
	
	/*In this part, printf function is called twice.
	 The first printf displays 4 values of i in different formats.
	The second printf displays 3 values of x in different formats, too.
	There are 7 conversion specifications used in this program - %d,%5d,%-5d,
	 -%5.3, %10.3f, %10.3e, and %-10g.*/
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); 
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
	
	return 0; //It indicates that the program ends here.
}