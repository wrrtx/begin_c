#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �Լ�д��û������Ŀ����
//int main()
//{
//	int cent = 0;
//	scanf("%d", &cent);
//	int cache = cent * 0.39;
//	int inch = cache % 12;
//	int foot = cache / 12;
//	printf("%d %d", foot, inch);
//
//	return 0;
//}

//����2 ��ʦ�ṩ
int main()
{
    int cm, ft, ih;
    scanf("%d", &cm);
    ft = cm / 30.48;
    ih = (cm / 30.48 - ft) * 12;
    printf("%d %d", ft, ih);
}