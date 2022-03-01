#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a; //p是存放了a地址的变量，类型是 int* ，称为指针变量，也可以理解为，指针就是地址

	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);

	return 0;
}