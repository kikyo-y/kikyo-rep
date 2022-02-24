#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//法一、就正常先用strlen()函数计算长度再打印
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//法二、嵌套函数
//int main()
//{
//	int len = 0;
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	// 3            2               1
	//首先第一个printf打印出来的是43这个整数，然后他这个整体返回给2的是字符的个数，即2
	//则此时变为printf("%d",printf("%d",2));
	//那么第二个printf打印出来的就是整数2，范围给第一个printf的是一个字符个数，即1
	//printf("%d",1);最后第一个printf打印出来整数1
	//最终结果为4321
	return 0;
}