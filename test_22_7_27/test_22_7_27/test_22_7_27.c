#define _CRT_SECURE_NO_WARNINGS 1
//����ʹ��scanf����Ȼ���治��ȫ�����Ǳ�׼c�ṩ��scanf_sֻ������VS���б��룬����ƽ̨���ɣ���ʹ�÷������ӡ�
#include <stdio.h>

//����1  �ַ������˽�
//int main(void)
//{
//	char ch = 'a';	//�ַ�����
//	int age = 20;	//����
//	short num = 10;	//������
//	//long
//	//long long
//
//	float weight = 55.5;	//�����ȸ�����
//	double d = 1.55;	//˫���ȸ�����
//
//	printf("Hello,work.\n");
//	printf("%d\n", sizeof(char));	    //1
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//4    intС�ڵ���long
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//	
//	// sizeof��λ���ֽ�byte
//	// �������λ��
//	// bit - ����λ
//	// byte - �ֽ� = 8bit
//	// kb = 1024byte
//	// mb = 1024 kb
//	// gb = 1024 mb
//	// tb = 1024gb
//	// pb = 1024tb
//	
//
//	return 0;
//}

//����2  ����ñ�����ʾ
//int main(void)
//{
//	int age = 19;	//����һ���������Ƽ��˱�ʾ������
//	double weight = 60.2;
//
//	age = age + 1;
//	weight = weight - 10;
//
//	printf("%d\n", age);		//%d - ����
//	printf("%f\n", weight);		//%f - float
//								//%if - double
//	
//	return 0;
//}

//����3  �����ͱ�������
//���� - ���ܸı����
//���� - �ܱ��ı�������ֲ�����{}�������ڶ���
//					   ȫ�ֱ���{}�������ⶨ��
//
//int a = 100;	//ȫ�ֱ���
//
//int main(void)
//{
//	int a = 10;	//�ֲ�����
//	
//	printf("%d\n", a);
//	//���ֲ�������ȫ�ֱ�����ͻʱ���ֲ����ȡ�ͬʱ�������ȫ�ֱ����;ֲ���������д��һ����
//
//	return 0;
//}

//����4  ������ʹ��
//int main(void)
//{
//	//��2�������ĺ�
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	
//	scanf("%d %d", &a, &b);		//scanf���Ǳ�׼c�ṩ��
//	sum = a + b;
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//����5 �������
//int main(void)
//{
//	//����
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	int max = arr[0];	//���������һ��Ԫ�������ֵ������ʣ��Ԫ�غ�max�Ƚϣ�����ҵ������max
//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//���
//	printf("max = %d\n", max);
//
//	return 0;
//}

//����5 ����
//int main(void)
//{
//	//����
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//���
//	printf("max = %d", max);
//
//	return 0;
//}

//����6 ʮ������ƽ��ֵ
int main(void)
{
	int arr[10] = { 0 };
	int i = 0;	//����
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//���
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	//��ƽ��ֵ
	int avg = sum / 10;
	//���
	printf("avg = %d", avg);

	return 0;
}
