/*Adds two fractions*/

#include <stdio.h> /*The required starting line for a C program.*/
int main (void) /*This function main is void, therefore it does
not return anything.*/
{
	/*Many variables are all declared as int type at once.*/
	int num1, denom1, num2, denom2, result_num, result_denom;

	/*Here, the words "Enter the first fraction:" appears
	indicating the user to input a fraction. Basically, integers 
	are just entered and they are separated by a / to look as fractions.
	Then, with the use of scanf function, the first number is stored to 
	the first variable indicated in that line. Then, the second follows and
	stored in the next variable.*/
	printf("Enter first fraction:");
	scanf("%d/%d", &num1, &denom1);

	/*The same procedure from the previous one is followed to be able
	to obtain the second fraction.*/
	printf("Enter second fraction:");
	scanf("%d/%d", &num2, &denom2);

	/*This part is where the math happens or where the actual operations
	on math are used. Variables are used in this equation. The values of these 
	variables are assigned by the users.*/
	result_num = num1 * denom2 + num2*denom1; //Cross multiplication and addition is done here for the numerator.
	result_denom = denom1 * denom2; //Multiplication is done here for the denominator.
	printf("The sum is %d/%d\n",result_num, result_denom);
	//This is where the sum is printed.

	return 0; //The program ends here. 
}
