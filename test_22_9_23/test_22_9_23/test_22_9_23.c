#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 ������Ƕ�׵���
////����Ƕ�׶��庯������������ֻ��Ƕ�׵���
//void test3()
//{
//	printf("hehe!\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}

////����2 ��������ʽ����
//#include <string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//��ʽ����1��
//	printf("%d\n", strlen("abc"));
//
//	//��ʽ����2��
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	printf("%s\n", strcpy(arr1, arr2));
//
//	//��ʽ����3��
//	printf("%d", printf("%d", printf("%d", 43)));	//printf�������ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//													//���Ϊ4321
//	return 0;
//}

////����3 �����������Ͷ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ�� - ��֪�����������Ϳ��Է��������ˡ��������������Ͳ���������
//	//�����к������ͷ������ͣ��������������ֶ��巽��
//	int Add(int, int);	
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)	//�����Ķ���
//{
//	return x + y;
//}

////����4 ʵ��Ӧ�ã��ֹ���
/////��������һ����ͷ�ļ��У�����һ���ڶ�Ӧ��.c�ļ���
////ʵ���ж��ǰ��ճ���4����д�������ǳ���3����д
//#include "add.h"
//#include "sub.h"		//��������һ����ͷ�ļ��У��൱�ڿ�����ͷ�ļ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�ӷ�
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//����
//	int d = Sub(a, b);
//	printf("%d\n", d);
//
//	return 0;
//}

//����5 �����Լ��Ĵ��룬���ش���
//���뾲̬��
#pragma comment(lib,"sub.lib")	//ֻ�о�̬�⣬Դ���������޷���ã�������ʹ��
#include "sub1.h"
int main()
{
	int a = 10;
	int b = 20;

	//����
	int d = Sub(a, b);
	printf("%d\n", d);

	return 0;
}