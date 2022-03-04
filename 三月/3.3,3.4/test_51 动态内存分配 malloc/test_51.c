#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//malloc(10*sizeof(int));             //���ڴ����뿪��10�����͵Ŀռ�
	                                     //sizeof(int) ��˼���Ǽ����int�Ĵ�С   ��*10
	 //int* p = malloc(10*sizeof(int));  //���εĿռ䣬��ôӦ����Ҫ���͵�ָ�룬int* 
							             //����Ϊmalloc��void*���ͣ�����Ҫ����ǿ������ת��
	int* p = (int*)malloc(10 * sizeof(int));

	//int* p = (int*)malloc(INT_MAX); //����һ���������Ŀռ䣬����malloc�Ƿ�Ὺ��ʧ��

	if (p == NULL) //��pָ��գ�˵����ʱ�ڴ����û�пռ��ˣ�malloc�޷�����
	{
		printf("%s\n", strerror(errno));  //��ӡ�������ԭ�򣬱���˵�ڴ�û�ռ䣬���ַ�����������%s
	}
	else  //����ڴ��пռ�Ļ�������Ϳ��ٸ�10�����Ϳռ�
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i; //p����mallocҪ���ٵĿռ��ʼ�����i��ֵ�ŵ��¿��ٵĵ�ַ��ȥ
			              //����i�����ӣ���ַҲ�����󿪱�
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d", i);
		}
	}
	free(p);
	p = NULL;

	return 0;
}