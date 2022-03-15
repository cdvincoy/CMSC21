//The program for Number 3, letter c.
#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	i = 7;
	j = 8;
	k = 9;
	
	printf("%d", (i = j) || (j == k));
	printf("%d %d %d", i, j, k);
	return 0;
}