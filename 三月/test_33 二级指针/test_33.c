#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;  //二级指针  int* 是个类型 ，* pp，告诉我们pp是个指针，解引用的话，就是**pp
	printf("%p,%p\n", p,pp);
	printf("%d\n", **pp);
	printf("%d\n", *p);
	


	return 0;
}