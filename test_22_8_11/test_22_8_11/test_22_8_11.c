#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1 ѡ�����
//int main(void)
//{
//	int input = 0;		//�����ֵ
//	printf("�ϴ�ѧ֮����Ҫ��ôѡ\n");
//	printf("�ú�ѧϰ����1����������2\n");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("����Գ���ʵ�����õ���offer��");	//�˴������ô�������������Ҳ���Բ���
//		}
//		else
//		{
//			printf("����ֻ�ܱ���ᶾ��");		//�˴������ô�������������Ҳ���Բ���
//		}
// 
//	return 0;
//}

//����2 ѭ�����
//int main(void)
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("����д���룬line:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("�㽫�õ���offer\n");
//	}
//
//	return 0;
//}

//����3 ����
//int Add(int x, int y)				//������ͺ���
//{
//	int z = 0;
//	z = x + y;
//	
//	return z;
//}
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	
//	//int sum = num1 + num2;		//������Ǻ����Ľ������
//	int sum = Add(num1, num2);		//�����Ľ������
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//����4 ����
int main(void)
{
	////������ķ���
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//����

	//���飺һ����ͬ���͵�Ԫ�صļ���(��ͬ�����ͣ�����)
	//���������±������ʵ�,�±궼�Ǵ�0��ʼ��
	
	//char ch[5] = { 'a','b','c' };				//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}