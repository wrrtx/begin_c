#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����1�Ѿ�ͨ��
int main()
{
	int X, Y;
	scanf("%d%d", &X, &Y);
	int cache = X;
	X = Y;
	Y = cache;
	printf("%d\n%d", X, Y);

	return 0;
}
//����2�ƺ�����if���
//int main()
//{
//	int X, Y;
//	scanf("%d%d", &X, &Y);
//	int cache = 0;
//	if (Y > X)
//	{
//		cache = X;
//		X = Y;
//		Y = cache;
//	}
//	printf("%d\n%d", X, Y);
//
//	return 0;
//}//