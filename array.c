#include <stdio.h>
int main(void)
{
	int n[ 50 ];
	int i,j;

	for ( i = 0; i < 50; i++)
	{
		n[ i ] = i + 1000;
	}
	for (j = 0; j < 50; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);	
	}
	return 0;
}
