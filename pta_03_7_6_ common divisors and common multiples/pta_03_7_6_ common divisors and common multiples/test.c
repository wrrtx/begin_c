#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a(int m, int n)
{
	if (m % n == 0)
		return n;
	else
		a(n, m % n);
}
int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	int i = 0;
	if (N > M)
	{
		i = M;
		M = N;
		N = i;
	}
	int min = a(M, N);
	int max = N * M / min;
	printf("%d %d", min, max);

	return 0;
}