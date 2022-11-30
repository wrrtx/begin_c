#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++) {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p)
{
    int i = 0;
    if (p <= 1)
        return 0;
    else
    {
        for (i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
                return 0;
        }
        return 1;
    }
}               //�ж�i�Ƿ�Ϊ����
int PrimeSum(int m, int n)
{
    int a = 0;
    int sum = 0;
    for (a = m; a <= n; a++)    //ǰ������ȷ�÷�ʽ������for (a = 2; a <= n; a++)ͨ�����ˣ�Ϊʲô��ʼֵ������ֱ�Ӵ�2��ʼ��
    {
        if (prime(a) != 0)
            sum += a;
    }       //����prime���ж��Ƿ����������Ǿͼ�����
    return sum;
}
