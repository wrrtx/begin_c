/* two_func.c -- һ���ļ��а����������� */
#include <stdio.h>
void butler(void);	/* ANST/ISO C����ԭ�� */
int main(void)
{
	printf("I will summon the bulter function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)		/* �������忪ʼ */
{
	printf("You rang,sir?\n");
}