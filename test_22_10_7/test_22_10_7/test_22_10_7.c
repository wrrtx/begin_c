#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �����ݹ飺���»�С
////������Ҫ������1.�������������������ֹͣ 2.ÿ�ε��ö���Խ�ӽ������������������һ������Ͳ�����
//int main()
//{
//	printf("hehe\n"); 
//	main();		//���ݹ飬ջ���
//
//	return 0;
//}

////����2 ����һ������ֵ���޷��ţ���˳���ӡÿһλ
//void print(unsigned int n)
//{
//	if (n > 9)			//��Ҫ���������������ơ�����ʹ�õ�����
//	{
//		print(n / 10);	//��Ҫ���������롣ÿ��ʹ�û�ƽ���������
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;	//�޷������ͣ�unsigned��n
//	scanf("%u", &num);//1234
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}

////����3 ��������ݹ������������ջ���stack overflow
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}								//����������������ջ���
//}
////�Ƽ���վhttps://stackoverflow.com		����Ա��֪����һ����Ӣ��ش�
////����д�ݹ飺1.�������ݹ� 2.�ݹ��β���̫��
//int main()
//{
//	test(1);
//	return 0;
//}

////����4 ����ⷨ����������ʱ���������ַ�������
//#include <string.h>
//int my_strlen(char* str)	//ָ��
//{
//	int count = 0;			//��������ʱ����
//	while (*str != '\0')	
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";			 //�ַ���������־��\0
//	//['b'] ['i']['t']["\0']
//	//printf("%d\n",strlen(arr));//���ú���
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));	//���鴫��ȥ�ǵ�ַ
//
//	return 0;
//}

////����5 ��ȷ�ⷨ����������ʱ���������ַ�������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str++�����ԣ�������ɴ���ֵ��++����˴�ԭ����ֵ�ٱ仯
//	else                              //++strҲ���У�����ȥ���ˣ��������˵��Ǳ���֮���ֵ
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']["\0']
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

////����6 ��������n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0; 
//	int ret = 1;
//	//ѭ����Ҳ���������ķ���
//	for (i = 1; i <= n; i++) 
//	{
//	ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

////����7 �ݹ飺��n�Ľ׳�
////��Щ���ܿ���ʹ�õ�����Ҳ���Եݹ�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1; 
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

////����8 �ݹ飺���n��쳲���������ǰ������������������һ���������������
//int count = 0;//����һ��ȫ�ֱ�������¼�����˼���
//int Fib(int n)
//{
//	//�����3��쳲��������ļ������
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1; 
//	else
//		return Fib(n - 1) + Fib(n - 2);	//������Ч��̫�ͣ���50����5�������ϣ�
//}										//������Ϊ�����˴����ظ��ļ���
//int main()
//{
//	int n = 0;
//	scanf("%d",&n); 
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//����9 ���������n��쳲���������ǰ������������������һ���������������
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);

	printf("%d\n", ret);	//�ܿ������������Ϊ����̫С���Ų������֣��������
							//Ч�ʸ�
	return 0;
}