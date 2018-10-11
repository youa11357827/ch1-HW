#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n;
	int i, j;

	printf("請輸入一個整數\n");
	scanf_s("%d",  &n);
	for ( i = 1; i <= n; i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for (j = 2*i-1; j>=1 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}


