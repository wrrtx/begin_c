//	stillbad.c -- �޸���������Լ������﷨
#include <stdio.h>
int main(void)	//��д��עʱע�����Ϊ//�����У�����/* */�����У�
{	//ʹ�û����Ŷ�����Բ����
	int n, n2, n3;	//����intʱ��������

	n = 5;
	n2 = n * n;
	n3 = n2 * n;	//�﷨��3�η�����n2*n2,������
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}