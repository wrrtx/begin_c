#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int bonus = 0;
	scanf("%d", &bonus);
	int hundred = bonus / 100;
	int fifty = (bonus % 100) / 50;
	int twenty= (bonus % 50) / 20;
	int ten = ((bonus % 50) % 20) / 10;
	int five= (bonus % 10) / 5;
	int tow = (bonus % 5) / 2;
	int one = (bonus % 5) % 2;
	if (hundred <= 9)
	{
		printf("100Ԫ:  %d��\n", hundred);
	}
	else
	{
		printf("100Ԫ: %d��\n", hundred);
	}
	printf(" 50Ԫ:  %d��\n", fifty);
	printf(" 20Ԫ:  %d��\n", twenty);
	printf(" 10Ԫ:  %d��\n", ten);
	printf("  5Ԫ:  %d��\n", five);
	printf("  2Ԫ:  %d��\n", tow);
	printf("  1Ԫ:  %d��\n", one);


	return 0;
}