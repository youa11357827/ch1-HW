#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n;
	
	printf("請輸入一個整數\n");
    scanf_s("%d", &n);
	if (n % 2 == 1)
	{
		printf("%d是一個奇數\n", n);
	}
	else
	{
		printf("%d是一個偶數\n", n);
	}
	system("Pause");
	return 0;
}


