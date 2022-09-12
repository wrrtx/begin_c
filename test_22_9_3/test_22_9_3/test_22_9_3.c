#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//程序1 循环语句while
//打印1-10的数字
int main()
{
	int i = 1;			//初始值

	while (i <= 10)		//括号里面为判断表达式，判断部分
	{
		if (5 == i)
			//break;	//i=5时跳出循环，因此，在while循环中，break用于永久的终止循环，输出1 2 3 4
			continue;	//跳过该语句后面的代码返回while，i一直是5，变成死循环，输出1 2 3 4后光标一直闪
						//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环
		printf("%d ", i);
		i++;			//调整部分
	}

	return 0;
}