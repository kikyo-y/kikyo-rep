#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)  //对10取余，余数为9，就把个位是9的找出来
		{
			printf("%d\n", i);
			count++;
		}
		if (i / 10 == 9)  //除以10，商9.就把十位是9的找出来
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}