#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n1,n2,n;

	printf("�п�J�@�Ӿ��\n");
	scanf_s("%d%d", &n1,&n2);
	if (n1 % n2 == 0)
	{
		n = n1 / n2;
		printf("%d�O%d��%d��\n", n1,n2,n);
	}
	else
	{
		printf("%d���O%d����ƭ���\n", n1, n2);
	}
	system("Pause");
	return 0;
}


