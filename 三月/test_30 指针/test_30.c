#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a; //p�Ǵ����a��ַ�ı����������� int* ����Ϊָ�������Ҳ�������Ϊ��ָ����ǵ�ַ

	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);

	return 0;
}