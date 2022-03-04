#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//calloc 会在内存中开辟一段空间，并把空间的每个字节初始化为0

int main()
{
	int* p = (int*)calloc(10,sizeof(int));

	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
	}

	free(p);
	p = NULL;
	return 0;
}