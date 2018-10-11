#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	printf("number  square  cube\n");
	for ( i = 1; i <=10; i++)
	{
		printf("%d",i);

		if (i<10)
		{
			printf("       ");
			printf("%d", i * i);
		}
		else
		{
			printf("      ");
			printf("%d", i * i);
		}
		if (log10(i*i)>=0 && 1>log10(i*i))
		{
			printf("       ");
		}
		else if(log10(i*i) >= 1 && 2 > log10(i*i))
		{
			printf("      ");
		}
		else
		{
			printf("     ");
		}
		printf("%d", i*i*i);

		printf("\n");
	}

	system("Pause");
	return 0;
}


