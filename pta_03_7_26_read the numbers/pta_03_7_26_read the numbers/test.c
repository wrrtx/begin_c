#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void begin(int n)
//{
//	int x = n;
//	if (n / 10 != 0)
//	{
//		begin(n / 10);
//	}
//	int y = x % 10;
//	if(y)
//	switch (y)
//	{
//		case 0:
//			printf("ling ");
//			break;
//		case 1:
//			printf("yi ");
//			break;
//		case 2:
//			printf("er ");
//			break;
//		case 3:
//			printf("san ");
//			break;
//		case 4:
//			printf("si ");
//			break;
//		case 5:
//			printf("wu ");
//			break;
//		case 6:
//			printf("liu ");
//			break;
//		case 7:
//			printf("qi ");
//			break;
//		case 8:
//			printf("ba ");
//			break;
//		case 9:
//			printf("jiu ");
//			break;
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int n = 0;
//	if (m < 0)
//	{
//		printf("fu ");
//		n = -m;
//	}
//	else
//		n = m;
//	begin(n);
//
//	return 0;
//}

#include <stdio.h>
int main() {
    int s, a;
    int count = 0;
    scanf("%d", &s); //��������
    if (s == 0) {
        printf("ling");
        return 0;
    }
    if (s < 0) {
        printf("fu ");
        s = -s;
    }
    int x;
    x = s;
    while (x > 0) {    //count�����Ǽ�λ
        x /= 10;
        count++;
    }
    int dao[count];
    int shu[count];
    for (int i = 0; i < count; i++) {      //������ֵ�������
        a = s % 10;
        s /= 10;
        dao[i] = a;
    }
    for (int i = count - 1; i > -1; i--) {   //��������������У�����ӡ
        shu[i] = dao[i];
        switch (shu[i]) {
        case 0: printf("ling"); break;
        case 1: printf("yi"); break;
        case 2: printf("er"); break;
        case 3: printf("san"); break;
        case 4: printf("si"); break;
        case 5: printf("wu"); break;
        case 6: printf("liu"); break;
        case 7: printf("qi"); break;
        case 8: printf("ba"); break;
        case 9: printf("jiu"); break;
        }
        if (i > 0)//�ж��ǲ������һ���������һ�������治�ӿո�
            printf(" ");
    }
    return 0;
}

