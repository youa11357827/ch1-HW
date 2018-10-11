#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double Km;
	int gasC;
	double GasKm;
	int ParkC;
	int TollC;
	int money;
	printf("請輸入每日總行駛公里\n");
	scanf_s("%lf", &Km);
	printf("請輸入汽油一公升/加侖的費用\n");
	scanf_s("%d", &gasC);
	printf("請輸入汽油一公升/加侖的行駛距離\n");
	scanf_s("%lf", &GasKm);
	printf("請輸入每日停車費\n");
	scanf_s("%d", &ParkC);
	printf("請輸入每日過路費\n");
	scanf_s("%d", &TollC);
	money = Km / GasKm * gasC + ParkC + TollC + 0.5;
	printf("你的每日交通費為%d元(四捨五入至整數)\n", money);
	system("Pause");
	return 0;
}


