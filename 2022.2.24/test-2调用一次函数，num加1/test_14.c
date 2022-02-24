#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Add(int* p)  //因为add函数不需要返回值，所以是void类型，而且是访问的num的地址，所以p是指针类型
{
	(*p)++;   //++的优先级比*高，如果不加括号的话，则就是p先++了，不符合，所以括起来，让*p去++
}

int main()
{
	int num = 0;
	Add(&num);   //因为另外的函数无法直接改变num的值，只能访问它的地址，再去改变它的值
	printf("num=%d\n", num);
	return 0;
}