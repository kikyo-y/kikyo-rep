#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* p = (int*)malloc(20); //�ȿ���һ��20���ֽڵĿռ�,ע��һ�£����ٵĿռ��forѭ����i�ķ�Χ���ı���ϵ
							   //��Ϊint��Ҫ4���ֽ�
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
	int* ptr = realloc(p, 40); //���¿�����һ���ڴ�ռ�

	if (ptr != NULL) //������ٵ��ڴ�ռ䲻�գ���ô�Ͱ�������֮ǰ��p���ڵ�һ��
	{               //���������Ϊ�գ���ôҲ��Ӱ��֮ǰ���ٺõ�p
		p = ptr;

		int i = 0;
		for (i = 5; i < 10; i++)  //����Ҫ��i��ֵ�ͻ����䣬��Ϊ�ڸտ��ٵ�p�У��Ѿ�������0-4
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