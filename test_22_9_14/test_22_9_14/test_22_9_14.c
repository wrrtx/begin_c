#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 do whileѭ���Լ�break��continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;		//����ѭ��
//			continue;	//Ҳ����ѭ��
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);	//��ִ�У����жϡ��ص�������ٻ�ѭ��һ��
//
//	return 0;
//}

////����2 ��ϰ1:��n���Ľ��
//int main()
//{
//	////�Լ��ĳ���
//	//int n = 0;
//	//int i = 0;
//	//int b = 1;
//	//scanf("%d", &n);
//	//for (i=n-(n-1); i <= n; i++)
//	//{
//	//	b = i * b;
//	//}
//	//printf("%d", b);
//
//	//��Ƶ�ĳ���
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////����3 ��ϰ2����1��+2��+����+n���ĺ�
//int main()
//{
//	////�Լ��Ĵ���(Ƕ�׵Ļ�Ч�ʻ�ͺܶ�)
//	//int i = 0;
//	//int n = 0;
//	//int a = 0;
//	//int b = 1;
//	//int ret = 0;
//	//scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	for (a = 1,b = 1; a <= i; a++)
//	//	{
//	//		b *= a;
//	//	}
//	//	ret = ret + b;
//	//}
//	//printf("%d", ret);
//
//	//��Ƶ�Ĵ���
//	////1��Ч�ʵͣ���
//	//int i = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int sum = 0;
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//	//printf("%d", sum);
//	//2(Ч�ʸ�)��
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

////����4 ��ϰ3����һ�����������в��Ҿ����ĳ������n���ö��ֲ���/�۰���ң����򣡣�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����");
//
//	return 0;
//}

////����5 ��ϰ4����ʾ����ַ��������ƶ����м���
//#include <string.h>		//strlen��ͷ�ļ�
//#include <windows.h>	//Sleep��ͷ�ļ�
//int main()
//{
//	char arr1[] = "wecome to bit!!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//˯�ߣ���λ����
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

////����6 ��ϰ5��ģ���û���¼�龰������ֻ�ܵ�¼���Σ�����ʧ�����˳�����
//#include <string.h>	//strcmp��ͷ�ļ�
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - �����ַ����Ƚϲ�����==�������ǱȽϵ�ַ���ַ���Ҫ��strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else if (i < 2)
//		{
//			printf("����������������룡\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳���¼����\n");
//	}
//
//	return 0;
//}

//����7 ������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.�¶��ˣ���ϲ��������Ϸ
//3.�´��˻��������˻���С�ˣ�Ȼ������£�ֱ���¶�
//4.��Ϸ����һֱ�棬�����˳���Ϸ
#include <stdlib.h>
#include <time.h>
void mune()
{
	printf("                           \n");
	printf("     ��ӭ�򿪲�����Ϸ      \n");
	printf("     ���ֵķ�Χ��1-100     \n");
	printf("                           \n");
	printf("        ��ʼ��Ϸ��1        \n");
	printf("        �˳���Ϸ��0        \n");
	printf("                           \n");
}
void game()
{
	//1.�����������
	//rand����������һ��0-32767֮�������
	//����ʱ��һֱ�ڱ���ص㣬ʹ��ʱ�����ʹret��ֵ�������

	int ret = rand() % 100 + 1;//%100��������0-99����1�ͱ����1-100
	//printf("%d\n", ret);//��֤�Ƿ���1-100

	//2.������
	int guess = 0;

	printf("��������µ�����:>");

	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("\n");
			printf("�µ�����С��\n");
			printf("����������:>");
		}
		else if (guess > ret)
		{
			printf("\n");
			printf("�µ����ִ���\n");
			printf("����������:>");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		mune();//��ӡ�˵�
		printf("��ѡ���Ƿ������Ϸ:>", input);
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ӭ������Ϸ��\n");
			game();
			break;
		case 0:
			printf("���˳���Ϸ��\n");
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);

	return 0;
}