
/*
#include <stdio.h>
int main(Void)
INT sum;
/* COMPUTE RESULT
sum = 25 + 37 - 19
/* DISPLAY RESULTS //
printf ("The answer is %i\n" sum);
return 0;
}
*/

//This program is the fixed one. 
#include <stdio.h>

int main(void)
{ //There's no opening brace in the previous program.

	int sum; //INT is an unrecognizable keyword because int is fixed keyword and also, c is case sensitive language.
	/* COMPUTE RESULT */
/*The previous program used a multi-line comment format but there is no closing mark.
Looking at it, the rest of the program will appear as a comment. There should be a closing
mark or should have used the mark or command for single line comment.*/

	sum = 25+37-19; //This will appear as an error because there's no semicolon in the previous one.
					//Also, the variable is named sum yet there's subraction.
					//While it is fine to use any variable name, it is better to organized and be precise.
	//DISPLAY RESULTS
//The comment used both single line and multi-line way of displaying comments.
	printf("The answer is %i  \n", sum); //Because there was no comma, there was an error and the sum variable was not called.
	return 0;

}
