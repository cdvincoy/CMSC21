//A program that reverses the digits of any 3-digit number given by the user.
#include <stdio.h>

int main(void) //This is function main.
{
	//Here, I declared 4 variables as int types.
	int three_digit, remainder_1, remainder_2, last_digit, second_digit, reversed; 
	
	/*The printf function will allow the user to input a 3-digit number. Similarly to the
	previous program, I added \a.*/
	printf("\aPlease enter a 3-digit number:");
	scanf("%d", &three_digit); //The 3-digit number is stored in the variable three_digit.
	
	/*Now, the program uses 3-digit numbers , I used 100 to divide 
	the numbers. Using modulo operation, the remainder is stored to variable remainder_1.
	Next, that remainder will be divided also using modulo operation by 10. After the
	equations are executed, I will obtain the value of the place value ones.*/
	remainder_1 = three_digit%100; 
	remainder_2 = remainder_1%10; //This is the third digit of the original number.
	
	/*Here, I will find what digits are in the place value of tens and hundreds.*/
	last_digit = three_digit/100; //This is the first digit of the original number and the last digit of the reversed one.
	second_digit = remainder_1/10; //This is the second digit of both original and reversed one.
	
	/*Here, I rearranged the place values of the three digits obtained. Thus, the number is reversed completely.*/
	reversed = (remainder_2 * 100) + (second_digit * 10) + last_digit;
	
	printf("Reverse: %d\n", reversed); //The final output is shown here.
	return 0; //This is the end of the program.
}