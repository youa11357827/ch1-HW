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
	printf("�п�J�C���`��p����\n");
	scanf_s("%lf", &Km);
	printf("�п�J�T�o�@����/�[�ڪ��O��\n");
	scanf_s("%d", &gasC);
	printf("�п�J�T�o�@����/�[�ڪ���p�Z��\n");
	scanf_s("%lf", &GasKm);
	printf("�п�J�C�鰱���O\n");
	scanf_s("%d", &ParkC);
	printf("�п�J�C��L���O\n");
	scanf_s("%d", &TollC);
	money = Km / GasKm * gasC + ParkC + TollC + 0.5;
	printf("�A���C���q�O��%d��(�|�ˤ��J�ܾ��)\n", money);
	system("Pause");
	return 0;
}


