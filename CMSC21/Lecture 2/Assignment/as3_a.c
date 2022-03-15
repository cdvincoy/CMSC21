//The program for Number 3, letter a.
#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	i = 3;
	j = 4;
	k = 5;
	
	printf("%d", i < j || ++ j < k);
	return 0;
}