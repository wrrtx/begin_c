#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void b(int s, int t)	//����
{
	if (s == 130)
		printf("wan mei! ");
	else if (s < 130)
		printf("duo chi yu! ");
	else if (s > 130)
		printf("ni li hai! ");		//���ϲ������ж����
	if (t == 27)
		printf("wan mei!");
	else if (t < 27)
		printf("duo chi rou!");
	else if (t > 27)
		printf("shao chi rou!");//���ϲ������ж�����
	printf("\n");		//����
}
void g(int s, int t)		//Ů��
{
	if (s == 129)
		printf("wan mei! ");
	else if (s < 129)
		printf("duo chi yu! ");
	else if (s > 129)
		printf("ni li hai! ");	//���ϲ������ж����
	if (t == 25)
		printf("wan mei!");
	else if (t < 25)
		printf("duo chi rou!");
	else if (t > 25)
		printf("shao chi rou!");	//���ϲ������ж�����
	printf("\n");//����
}
int main()
{
	int n = 0;
	scanf("%d", &n);	//����
	int x = 0, s = 0, t = 0;	//x���Ա�s����ߣ�t������
	int i = 0;
	if (n == 0)
		;
	else
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d%d%d", &x, &s, &t);	//����3��ֵ
			switch (x)//�ж�����������Ů��
			{
			case 1:
				b(s, t);	//����
				break;
			case 0:
				g(s, t);//Ů��
				break;
			}
		}
	}

	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 0, s = 0, t = 0;
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &x, &s, &t);
//		if (x == 1)
//		{
//			if (s == 130)
//				printf("wan mei! ");
//			else if (s < 130)
//				printf("duo chi yu! ");
//			else if (s > 130)
//				printf("ni li hai! ");
//			if (t == 27)
//				printf("wan mei!\n");
//			else if (t < 27)
//				printf("duo chi rou!\n");
//			else if (t > 27)
//				printf("shao chi rou!\n");
//		}
//		if (x == 0)
//		{
//			if (s == 129)
//				printf("wan mei! ");
//			else if (s < 129)
//				printf("duo chi yu! ");
//			else if (s > 129)
//				printf("ni li hai! ");
//			if (t == 25)
//				printf("wan mei\n");
//			else if (t < 25)
//				printf("duo chi rou!\n");
//			else if (t > 25)
//				printf("shao chi rou!\n");
//		}
//	}
//
//	return 0;
//}

//# include<stdio.h>
//int main()
//{
//	int a, b, gender, height, weight;
//	scanf("%d", &a);
//	for (b = 0; b < a; b++)
//	{
//		scanf("%d %d %d", &gender, &height, &weight);
//		if (gender == 1)
//		{
//			if (height > 130)
//			{
//				printf("ni li hai! ");
//			}
//			if (height == 130)
//			{
//				printf("wan mei! ");
//			}
//			if (height < 130)
//			{
//				printf("duo chi yu! ");
//			}
//			if (weight > 27)
//			{
//				printf("shao chi rou!\n");
//			}
//			if (weight == 27)
//			{
//				printf("wan mei!\n");
//			}
//			if (weight < 27)
//			{
//				printf("duo chi rou!\n");
//			}
//		}
//		if (gender == 0)
//		{
//			if (height > 129)
//			{
//				printf("ni li hai! ");
//			}
//			if (height == 129)
//			{
//				printf("wan mei! ");
//			}
//			if (height < 129)
//			{
//				printf("duo chi yu! ");
//			}
//			if (weight > 25)
//			{
//				printf("shao chi rou!\n");
//			}
//			if (weight == 25)
//			{
//				printf("wan mei!\n");
//			}
//			if (weight < 25)
//			{
//				printf("duo chi rou!\n");
//			}
//		}
//	}
//	return 0;
//}
