#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fib(int i)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(i >= 3)  //ÒªÓÐÑ­»·
	{
		c = a + b;
		a = b;
		b = c;
		i--;
	}
	return c;
}

int main()
{
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	num = Fib(n);
	printf("num = %d\n", num);

	return 0;
}