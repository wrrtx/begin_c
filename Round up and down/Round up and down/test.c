#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a = 0;
	scanf("%f", &a);	//���븡����
	int max = ceil(a);	//�ú������ز�С��a����
	int min = max - 1;	//������a����
	if (max > a)		//��С��a���������
	{
		printf("%d\n", min);
		printf("%d", max);
	}
	else
	{
		printf("%d\n", max);	//������ǲ����ĵط���Ϊʲô��ȵ�ʱ�����Ҳ����ȣ�
		printf("%d", max);		//����������a������4.00�����Ҫ4�����У�4����ͨ��
	}

	return 0;
}
//#include<stdio.h>
//int main() 
//{
//    float a;+
//    scanf("%f", &a);
//    printf("%d\n%d", (int)(a), (int)ceil(a));
//}