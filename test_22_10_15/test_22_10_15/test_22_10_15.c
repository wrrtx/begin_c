#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1 ������Ϊ����������ð������
void bubble_sort(int arr[], int sz)//�β�arr������ָ��
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;		//�Ż�(���ӣ�һ��ʼ��������)
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//����Ϊ���� - ð�������������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ

	return 0;
}

////����2 ��������ʲô - ��������Ԫ�صĵ�ַ
////ֻ��2�����⣺1.sizeof���������� - ��ʱ��ʾ�������� - ���������������Ĵ�С��λ���ֽ�
////             2.&������ - ��ʾ��������ĵ�ַ - ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr[0]);
//	printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//��������ʾ��������
//
//	printf("%p\n", &arr);//����ȡ������������ĵ�ַ��ֻ������Ϊ��ʼ����Ԫ��һ�������Բ�һ��
//	printf("%p\n", &arr + 1);//��֤,���0x28������40
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//���������Աȣ����4
//	printf("%p\n", &arr[0]);//�����ֻ���ͬ
//
//	return 0;
//}
