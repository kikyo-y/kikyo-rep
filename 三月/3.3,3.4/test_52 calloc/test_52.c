#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//calloc �����ڴ��п���һ�οռ䣬���ѿռ��ÿ���ֽڳ�ʼ��Ϊ0

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