#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1 ѭ�����while
//��ӡ1-10������
int main()
{
	int i = 1;			//��ʼֵ

	while (i <= 10)		//��������Ϊ�жϱ��ʽ���жϲ���
	{
		if (5 == i)
			//break;	//i=5ʱ����ѭ������ˣ���whileѭ���У�break�������õ���ֹѭ�������1 2 3 4
			continue;	//������������Ĵ��뷵��while��iһֱ��5�������ѭ�������1 2 3 4����һֱ��
						//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
		printf("%d ", i);
		i++;			//��������
	}

	return 0;
}