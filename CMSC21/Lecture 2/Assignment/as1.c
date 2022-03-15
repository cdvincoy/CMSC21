//A program that reverses the digits of any 2-digit number given by the user.
#include <stdio.h>

int main(void) //This is function main.
{
	int two_digit, remainder, second_digit, reversed; //Here, I declared 4 variables as int type. 
	
	/*The printf function will allow the user to input a 2-digit number. Also,
	I added \a to create a sound that will notify the user that the program is running.
	I found this while reading more about \n and other escape sequence. IAlthough, I am hoping
    that I'm using it correctly. */
	printf("\aPlease enter a 2-digit number:"); 
	scanf("%d", &two_digit); //The number inputted is stored in the first variable declared.
	
	/*Since this program is limited to 2-digit numbers only, I used 10 to divide 
	the numbers. However, this first equation uses modulo operation, the result of this
	is a remainder. I did this to identify the first digit of the reversed
	number. It is then stored to variable remainder.*/
	remainder = two_digit % 10; 
	/*Here, I used division to divide any given 2-digit number by 10. 
	This is done to find out what digit is in the place value of tens. 
	This will make the reverse easier.*/
	second_digit = two_digit/10;
	/*Since I need the digits to actually swap places, the remainder will take the place value of tens.
	So, I multiplied it by 10. For the second digit, there is no need to multiply because
	its place value is already in ones. Adding the two together, creates the reversed number.*/
	reversed = (remainder * 10) + second_digit;
	
	printf("Reverse: %d\n", reversed); //This is where the final output is displayed.
	return 0; //End of the program.
}