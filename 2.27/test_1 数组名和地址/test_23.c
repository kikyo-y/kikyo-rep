#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);  //����������������Ԫ�صĵ�ַ��
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr); //�������������ã�������Ӧ��Ԫ���ǲ����������Ԫ�أ����ȷ����

	printf("%p\n", &arr); //ȡ��������������ĵ�ַ��������Ԫ�صĵ�ַ

	return 0;
}