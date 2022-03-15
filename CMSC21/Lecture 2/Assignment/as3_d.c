//The program for Number 3, letter d.
#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	i = j = k = 1;
	
	printf("%d",++i || ++j && ++k);
	printf("%d %d %d", i, j, k);
	return 0;
} 