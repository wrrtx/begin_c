#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 ����Ҳ���ӳ��򣬿⺯��
////���ù���www.cplusplus.comѧϰ�⺯��strcpy - ����,�⺯��memset - �ڴ�����
//#include <string.h>	//strcpy�Ŀ⺯��
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	memset(arr2, 'x', 5);
//	printf("%s\n", arr2);
//
//	return 0;
//}

////����2 �Զ��庯��������1���ҳ����������е����ֵ - ����Զ��庯��get_max
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//����z - ���ؽϴ�ֵ
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ��ã��˴��ǵ���
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//����3 �Զ��庯��������2��дһ���������Խ����������α���������
//�ı�������ʱҪ��ָ�룬���ı�ʱ����
//int swap(int x, int y)
void swap(int* pa, int* pb)		//�˴�Ϊ�����Ķ��壬����������ʽ����-�βΣ�δ����ʱʲô�����ǣ������������٣��;ֲ�����һ��
{
	//int z = 0;		//��ʱ��ַ�����˱仯���ο�ָ��İ취�޸�
	//z = x;			//ʵ�δ����β�ʱ���β���ʵ�ε�һ����ʱ�������ı��ββ��ܸı�ʵ��
	//x = y;
	//y = z;	
	//return x;
	//return y;

	int z = 0;			//�˴��β����ҵ���������a��b�����ܸı�
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("��ӡǰ��a = %d , b = %d\n", a, b);

	//�����ĵ��ã��������н�ʵ�ʲ���-ʵ�Σ��������ǳ��������������ʽ�������ȣ���������ȷ����ֵ��
	//swap(a, b);
	swap(&a, &b);

	printf("��ӡ��a = %d , b = %d\n", a, b);

	////ָ��
	//int* pa = &a;		
	//*pa = 20;			//pa��һ��ָ�����
	//printf("%d\n", a);

	return 0;
}