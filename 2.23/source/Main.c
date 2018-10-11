#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n[4],C;
	int i,j;
	printf("請輸入三個整數\n\n");
	

	for ( i = 1; i <= 3; i++)
	{printf("請輸入第%d個整數\n", i);
	scanf_s("%d", &n[i]);
	printf("\n");
	}
	
	for ( i = 1; i <= 3; i++)
	{
		for ( j = 1; j <=3; j++)
		{
			if (n[i]>n[j])
			{
				C = n[i];
				n[i] = n[j];
				n[j] = C;

			}
		}

	}
	printf("\n");
	printf("最大的整數是 %d\n", n[1]);
	printf("最小的整數是 %d\n", n[3]);
	
	system("Pause");
	return 0;
}

		
