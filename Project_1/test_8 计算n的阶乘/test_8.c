#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()         计算n的阶乘
//{
//	int i;
//	int sum = 1;
//	scanf("%d", &i);
//	for (i; i >= 1; i--)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	for (j = 1; j <= 10; j++)
	{
		ret = 1;   //因为每次阶乘时都会改变ret的值，所以重新开始一个新的值，需要给ret重新赋值为1
		for (i = 1; i <= j; i++)  //这里的for循环是进行n的阶乘
		{
			ret *= i;
		}
		sum = sum + ret;   //乘完之后，再相加
	}
	printf("%d", sum);

	return 0;
}