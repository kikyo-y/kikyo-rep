#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* p = (int*)malloc(20); //先开辟一个20个字节的空间,注意一下，开辟的空间和for循环里i的范围是四倍关系
							   //因为int需要4个字节
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* ptr = realloc(p, 40); //重新开辟了一个内存空间

	if (ptr != NULL) //如果开辟的内存空间不空，那么就把它赋给之前的p，融到一起
	{               //但是如果它为空，那么也不影响之前开辟好的p
		p = ptr;

		int i = 0;
		for (i = 5; i < 10; i++)  //这里要给i换值和换区间，因为在刚开辟的p中，已经存入了0-4
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
	}
	free(p);
	p = NULL;

	return 0;
}