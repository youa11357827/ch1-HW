#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n[4],C;
	int i,j;
	printf("�п�J�T�Ӿ��\n\n");
	

	for ( i = 1; i <= 3; i++)
	{printf("�п�J��%d�Ӿ��\n", i);
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
	printf("�̤j����ƬO %d\n", n[1]);
	printf("�̤p����ƬO %d\n", n[3]);
	
	system("Pause");
	return 0;
}

		
