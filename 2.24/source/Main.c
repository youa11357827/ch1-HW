#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n;
	
	printf("�п�J�@�Ӿ��\n");
    scanf_s("%d", &n);
	if (n % 2 == 1)
	{
		printf("%d�O�@�ө_��\n", n);
	}
	else
	{
		printf("%d�O�@�Ӱ���\n", n);
	}
	system("Pause");
	return 0;
}


