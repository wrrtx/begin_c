#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 goto��䣺�������ã���������
//���ӻ���������ô����
//int main()
//{
//flag:
//	printf("haha\n");
//	printf("hehe\n");
//
//	goto flag;			//��ʱ��ѭ��
//
//	return 0;
//}

////����2 �ػ��������к������1�����ڹػ�����������룺��������ȡ���ػ�
////cmd��ػ�shutdown -s -t 60��ȡ���ػ�shutdown -a
////C�����ṩ��һ��������system()-ִ��ϵͳ�����
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ������룺����������ȡ���ػ���\n");
//	//goto��䣺
////again:
////	printf("������:>");
////	scanf("%s", input);
////	if (strcmp(input, "������") == 0)
////	{
////		system("shutdown -a");
////		printf("�ѳɹ�ȡ���ػ���\n");
////	}
////	else
////	{
////		printf("�������ϵͳ���ػ����㻹�����ٴ����룡\n");
////		goto again;
////	}
//	
//	//����goto��䣺
//	while (1)
//	{
//		printf("������:>");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�ѳɹ�ȡ���ػ���\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//	return 0;
//}

////����3 goto ���ֻ����һ��������Χ����ת�����ܿ纯��
//void test()
//{
//flag:
//	printf("test\h");
//}
//int main()
//{
//	goto flag;//�˴���ʾδ����
//	return 0;
//}				//��������ǲ����Եģ��纯����
