#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void begin(int n)
{
	if (n / 10 != 0)
		begin(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	begin(n);

	return 0;
}