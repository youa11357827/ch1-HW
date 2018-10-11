#include <stdio.h>
#include <stdlib.h>


int main (void)
{
	int n;
	int i,j,k;
	printf("請輸入一個正整數\n");
	scanf_s("%d",&n);
	for ( i = 1; i <= n;i++)
	{
		if (i == n || i == 1) 
		{
				for (j = 1; j <=n; j++)
				{printf("*");}
				printf("\n");
		}

		else
		{
			for (k = 1; k <= n; k++)
			{
				if (k == 1||k==n)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("Pause");
	return 0;
}