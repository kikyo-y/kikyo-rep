#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define __DEBUG__
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef __DEBUG__     //假如有些语句不想让它编译出来，但是有些情况需要它，那么就定义一个DEBUG,
		             //只有在最开头处宏定义才会让他编译，  #define __DEBUG__
		printf("%d", arr[i]);
#endif
	}

	return 0;
}