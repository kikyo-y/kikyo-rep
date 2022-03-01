#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct T
{
	int a;
	char b;
	char arr[10];
	double c;
};

struct S
{
	char ch[5];
	struct T t;  //嵌套
	char* pc;
};

int main()
{
	char arr1 = "hi";
	struct S s = { "hehe", { 1,'f',"hello", 3.1 }, arr1 };
	printf("%s\n", s.ch);  //数组
	printf("%d\n", s.t.a); //整型
	printf("%c\n", s.t.b); //单个字符串


	return 0;
}