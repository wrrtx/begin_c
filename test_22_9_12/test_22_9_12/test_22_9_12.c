#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 ѭ�����while
////��ӡ1-10�������Լ�break��continue������
//int main()
//{
//	int i = 1;			//��ʼֵ
//
//	while (i <= 10)		//��������Ϊ�жϱ��ʽ���жϲ���
//	{
//		if (5 == i)
//			break;	//i=5ʱ����ѭ������ˣ���whileѭ���У�break�������õ���ֹѭ�������1 2 3 4
//			//continue;	//������������Ĵ��뷵��while��iһֱ��5�������ѭ�������1 2 3 4����һֱ��
//		//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//		printf("%d ", i);
//		i++;			//��������
//	}
//
//	return 0;
//}

////����2 ��������1
//int main()
//{
//	int cha = getchar();	//����һ���ַ�
//	printf("%c\n", cha);
//	putchar(cha);			//�����������getchar�ɶԣ����һ���ַ�
//
//	return 0;
//
//	int ch = 0;
//	//����cerl+z  getchar��ȡ����
//	while ((ch = getchar()) != EOF) //EOF��end of file,�ļ�������־������EOF��-1
//	{
//		putchar(ch);		//��ʱ���Բ��϶�ȡ�ַ�
//	}						
//
//	return 0;
//}

////����3  �Գ���2���������
////ϣ��Ҫ�пձ���̬�����������ͣ�����ѧϰ
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);	//���鱾�����һ����ַ�����Բ���Ҫ�ӵ�ַ����
//	//����ÿո������������gets
//	printf("��ȷ�����룬����(Y/N):>");
//	/*���������е�\n
//	getchar();//��ֻ������һ���ַ�*/
//	//���������ж���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("����ɹ�");
//	}
//	else
//	{
//		printf("����ʧ��");
//	}
//
//	return 0;
//}

//����4 ��������2
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9' )	//���������˵��ӡ���ַ���������
			continue;
		
		putchar(ch);
	}

	return 0;
}
