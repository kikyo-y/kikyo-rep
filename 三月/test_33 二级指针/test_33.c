#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;  //����ָ��  int* �Ǹ����� ��* pp����������pp�Ǹ�ָ�룬�����õĻ�������**pp
	printf("%p,%p\n", p,pp);
	printf("%d\n", **pp);
	printf("%d\n", *p);
	


	return 0;
}