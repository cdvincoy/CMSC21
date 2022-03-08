//This program will display the result of the value 15 being subtracted from 87

#include <stdio.h>
int main(void){

	//First, variables are declared as int type.
	int minued, subtrahend, difference; 
	
	//Second, values are assigned to the variables.
	minued = 87;
	subtrahend = 15;
	//Third, the actual subraction is done.
	difference = minued - subtrahend; 

	//Last, a sentence is displayed to show the result.
	printf("When %d is subtracted from %d, the result is %d.\n",subtrahend, minued, difference);
	return 0; //The program ends here. 
}
