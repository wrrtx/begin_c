#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �����ؼ���
////      C�����ṩ�ģ������Լ��������ұ����������ǹؼ���
//int main(void)
//{
//	//int char;   //char��������������
//	{
//		auto int a = 10;
//		//�ֲ������ﶼ����auto�����Զ��������Զ��������Զ����٣�����auto����ʡ�Ե���
//		//����auto���µ�C�����﷨��Ҳ�������÷���������ʱ������
//	}
//
//	//extern�����������ⲿ����
//
//	register int num = 100; //register�ǽ���num��ֵ���ڼĴ����У�����/Ƶ����ʹ�õ����ݿ��Է������������Ч��
//
//	//signed �з��ŵ� 10/-2
//	//unsigned �޷��ŵ�
//	//static ��̬��
//	//union �����壨�����壩
//	//void ��/��
//	//volatile ���ָ��˵�c���Զ�λ
//
//	//define Ԥ����ָ����ǹؼ���
//	//include Ԥ����ָ����ǹؼ���
//
//	return 0;//���أ���int��Ӧ
//}

////����2 �ؼ���typedef�������ض���/�����ض���
//typedef unsigned int u_int;
//int main(void)
//{
//	unsigned int num = 100;
//	u_int num2 = 100;		//��ʱu_int��unsigned int��һ����
//
//	return 0;
//}

////����3 static����̬��
//// �÷���1.���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ���ɾ�̬��������ȫ�ֱ����൱
////       2.����ȫ�ֱ���
////		 3.���κ���
//////1.�ֲ�����
////void test()
////{
////	static int a = 1;
////	a++;
////
////	printf("%d ", a);
////}				//û��staticʱ���ֲ����Զ����٣�����static��a��û���Զ����٣����Ǳ���
////int main()
////{
////	int i = 0;
////	while (i < 10)
////	{
////		test();
////		i++;
////	}
////
////	return 0;
////}
//////2.ȫ�ֱ���
//////static����֮��ʹ���ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ�ã�����Դ�ļ�����ʹ�ã�
//////ȫ�ֱ���������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ�������ԣ����Ǳ�static����֮�󣬾ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����!
////extern int g_val;	//����
////int main()
////{
////	printf("%d\n", g_val);
////
////	return 0;
////}
////3.���κ���
////static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ��
////������ : static�ǽ��������ⲿ�������Ա�����ڲ���������!(��static����ȫ�ֱ���һ��!)
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

////����4 #define��һ��Ԥ����ָ����峣���ͺ�
//////1.�������/����
////#define MAX 1000
////int main()
////{
////	printf("MAX = %d\n", MAX);
////	return 0;
////}
////2.�����
//#define ADD(X,Y) ((X)+(Y))	/*X+Y*/			//��������ʹ����һ������ı��ʽ
//int main()
//{
//	//��������滻��
//	printf("%d\n", 4 * ADD(2, 3));//#define ADD(X,Y) X+Y������������壬�ͻ���4*2+3�����11
//	
//	//printf("%d\n", 4*ADD(2, 3));//���20
//
//	return 0;
//}

// //����5 ָ�� �൱�ڵ�ַ
//int main()
//{
//	int a = 10;//a���ڴ��з���4���ֽڿռ�
//	printf("%p\n", &a);//��ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
//				 //* ˵��pa��ָ�������int ˵��paִ�еĶ�����int����
//	*pa = 20;	 //�˴�* �ǽ����ò�������*pa����ͨ��pa��ߵĵ�ַ�ҵ�a
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

////����6 ָ��Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//x64�������8��x86�������4��������Ϊָ����������ŵ�ַ����ַ��С����ָ���С
//	//32λ  32bit   4byte
//	//64λ  64bit   8byte
//
//	return 0;
//}

//����7 �ṹ��:ʹC���������������������ͣ������µ����ͳ���
struct Stu		//ѧ���Ľṹ��
{
	char name[20];
	int age;
	double score;	//˫���ȸ����ʹ�ӡ��%lf
};
struct Book		//��Ľṹ��
{
	char name[20];
	float price;
	char  id[30];
};
int main()
{
	struct Stu a = {"����", 20, 98.5};//�ṹ���ʼ��
	printf("1: %s %d %lf\n", a.name, a.age, a.score);//�ṹ�����.��Ա����
	
	struct Stu * pa = &a;
	printf("2: %s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);//�φ���

	printf("3: %s %d %lf\n", pa->name, pa->age, pa->score);//��ֱ�ۣ��ṹ��ָ��->��Ա������

	return 0;
}