#define _CRT_SECURE_NO_WARNINGS 1

//函数指针，是指向函数的指针

// &函数名 和 函数名 是一样的，都是函数的地址
#include <stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 4;

	int arr[10] = { 0 };
	int(*p)[10] = &arr; //数组指针

	int c = Add(a, b);
	printf("%d\n", c);

	printf("%p\n", Add); 
	printf("%p\n", &Add);

	//函数指针
	int (*pa)(int, int) = Add; // （*pa）说明这是个指针类型，（int，int）说明这是函数的两个参数，并且它是int类型

	printf("%d\n", (*pa)(2, 8));

	return 0;
}