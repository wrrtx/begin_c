#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �����ĵ���
////int swap(int x, int y)
//void swap(int* pa, int* pb)		
//{
//	//int z = 0;		
//	//z = x;		
//	//x = y;
//	//y = z;	
//	//return x;
//	//return y;
//
//	int z = 0;			
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("��ӡǰ��a = %d , b = %d\n", a, b);
//
//	//�����ĵ��ã�
//	//swap(a, b);	//��ֵ���ã��βκ�ʵ��û����ϵ
//	swap(&a, &b);	//��ַ���ã��βκ�ʵ������ϵ
//
//	printf("��ӡ��a = %d , b = %d\n", a, b);
//
//	////ָ��
//	//int* pa = &a;		
//	//*pa = 20;			//pa��һ��ָ�����
//	//printf("%d\n", a);
//
//	return 0;
//}

////����2 ��ϰ1���ú����ж�һ�����ǲ�������(100-200)
//int is_prime(int n)
//{
//	//2 -> n-1֮�������
//	int j = 0;
//	for (j = 2; j < n; j++)	//n������sqrt��n�����������Ż�������Ҫ����ͷ�ļ�#include <math.h>
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}	//�����������һ�����ܾͺã���������һ��������
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

////����3 ��ϰ2���ú����ж��Ƿ�Ϊ���� 
//int is_leap_year(int n)	//һ��������д�������ͣ�����������Ĭ��int����
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))	//���󣺶�������жϲ���Ϥ 
//	//	return 1;
//	//else
//	//	return 0;
//
//	//���򵥵�д��:
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}					//Ҫע��return���÷�
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

////����4 ��ϰ3���ú���ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr2[], int k, int s)	//arr2����һ��ָ��
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr2[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr2[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ�����
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//�趨���ҵ��˾ͷ����ҵ�λ�õ��±�
//	//      �Ҳ����ͷ���-1
//	//����arr1���Σ�ʵ�ʴ��ݵĲ������鱾����������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr1, key, sz);//������仰�����Էŵ�����������㲻��
//	if (-1 == ret)
//	{
//		printf("�Ҳ�����!\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���: %d\n", ret);
//	}
//
//	return 0;
//}

//����5 ��ϰ4���ú�����ÿ����һ����������ͻὫnum��ֵ����1
void add(int *p)
{
	(*p)++;
}
int main()
{
	//ÿ�ε��ú���ʱ��ʹnum����1
	int num = 0;
	//��ַ
	add(&num);					//һ��Ҫ���ʲôʱ��ֵ��ʲôʱ��ַ
	printf("%d\n", num);//1

	add(&num);
	printf("%d\n", num);//2

	add(&num);
	printf("%d\n", num);//3

	return 0;
}