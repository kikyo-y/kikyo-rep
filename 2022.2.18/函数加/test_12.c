#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int main()
{
	int a = 6;
	int b = 7;
	int sum = Add(a, b);
	printf("%d", sum);

	return 0;
}