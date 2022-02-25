#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Jiec(int n)
{
	int x = 0;
	int ret = 1;
	for (x = 1; x <= n; x++)
	{
		ret *= x;
	}
	return ret;
}
int main()
{
	int i = 0;
	int sum = 0;
	scanf("%d", &i);
	sum = Jiec(i);

	printf("%d\n", sum);

	return 0;
}