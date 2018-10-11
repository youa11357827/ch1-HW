#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int  n;
	
	printf("叫块俱计\n");
    scanf_s("%d", &n);
	if (n % 2 == 1)
	{
		printf("%d琌计\n", n);
	}
	else
	{
		printf("%d琌案计\n", n);
	}
	system("Pause");
	return 0;
}


