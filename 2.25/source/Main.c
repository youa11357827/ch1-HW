#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i,j;
	for ( i = 1; i <=5; i++)
	{
		if (i == 1)
		{
			printf(" ");
			printf("CCCCCCC");
		}
		else if (i==5)
		{
			printf(" ");
			printf("C");
			printf("     ");
			printf("C");
		}
		else
		{
			printf("C");
			for (j = 1; j <= 7; j++)
			{
				printf(" ");
			}
			printf("C");
		}

		printf("\n");

    }


	printf("\n");


	for ( i = 1; i <=5; i++)
	{
		if (i==1)
		{printf("PPPPPPPPP");}
		else if (i==5)
		{printf("     P P");}
		else 
		{
			printf("    P   P");
		}
		printf("\n");
	}


	printf("\n");


	for (i = 1; i <= 5; i++)
	{
		if (i == 1||i==3||i==5)
		{
			printf(" WWWWWWWW");
		}

		else
		{
			printf("W");
		}
		printf("\n");
	}

	system("Pause");
	return 0;
}	


