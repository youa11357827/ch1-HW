#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n1,n2,n;

	printf("請輸入一個整數\n");
	scanf_s("%d%d", &n1,&n2);
	if (n1 % n2 == 0)
	{
		n = n1 / n2;
		printf("%d是%d的%d倍\n", n1,n2,n);
	}
	else
	{
		printf("%d不是%d的整數倍數\n", n1, n2);
	}
	system("Pause");
	return 0;
}


