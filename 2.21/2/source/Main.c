#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n;
	int i, j, k,l;
	printf("請輸入一個正整數\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i == 1 || i == n	)
		{
			for (j = 1; j <= n; j++)
			{
				if ( j == 1 || j == n || j == 2 || j == (n - 1) || j == 3 || j == (n - 2))
				{printf(" ");}
				else
				{printf("*");}
			}
			printf("\n");
		}
		else if (i == 2 || i == n-1)
		{
			for (l = 1; l <= n; l++)
			{
				if (l == 2 || l == n-1)
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
				if (k == 1 || k == n)
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