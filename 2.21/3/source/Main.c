#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n;
	int i, j, k, l,m;
	printf("請輸入一個大於5的正整數\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i == 1 )
		{
			for (j = 1; j <= n; j++)
			{
				if( j == (n+1)/2)
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
		else if (i == 2 )
		{
			for (l = 1; l <= n; l++)
			{
				if (l == (n+1)/2 || l == (n+1)/2+1 || l == (n + 1) / 2 - 1)
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
		else if (i == 3)
		{
			for (m = 1; m <= n; m++)
			{
				if (m == (n + 1) / 2 || m == (n + 1) / 2 + 1 || m == (n + 1) / 2 - 1 || m == (n + 1) / 2 + 2 || m == (n + 1) / 2 - 2)
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
		else
		{
			for (k = 1; k <= n; k++)
			{
				if (k == (n+1)/2)
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