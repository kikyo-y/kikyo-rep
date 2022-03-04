#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//malloc(10*sizeof(int));             //向内存申请开辟10个整型的空间
	                                     //sizeof(int) 意思就是计算出int的大小   再*10
	 //int* p = malloc(10*sizeof(int));  //整形的空间，那么应该需要整型的指针，int* 
							             //又因为malloc是void*类型，所以要进行强制类型转换
	int* p = (int*)malloc(10 * sizeof(int));

	//int* p = (int*)malloc(INT_MAX); //开辟一个整形最大的空间，看看malloc是否会开辟失败

	if (p == NULL) //当p指向空，说明此时内存可能没有空间了，malloc无法开辟
	{
		printf("%s\n", strerror(errno));  //打印出错误的原因，比如说内存没空间，是字符串，所以用%s
	}
	else  //如果内存有空间的话，假设就开辟个10个整型空间
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i; //p就是malloc要开辟的空间最开始那里，把i的值放到新开辟的地址里去
			              //随着i的增加，地址也在往后开辟
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d", i);
		}
	}
	free(p);
	p = NULL;

	return 0;
}