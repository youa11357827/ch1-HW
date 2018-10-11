#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double BMI;
	double h;
	double w;
	int B;
	printf("請輸入您的身高(公分)\n");
	scanf_s("%lf",&h);
	printf("\n");
	printf("請輸入您的體重(公斤)\n");
	scanf_s("%lf",&w);
	BMI = w / (h / 100 * h / 100);

	printf("您的BMI是%2.2f\n\n",BMI );
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");                                                                                                                                                                           
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("Pause");
	return 0;
}


