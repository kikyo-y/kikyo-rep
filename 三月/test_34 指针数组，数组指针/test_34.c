#define _CRT_SECURE_NO_WARNINGS 1

//ָ������-----���ָ�������

#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 4;
	int* arr[5] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{

		printf("%d\n", *(arr[i]));  //arr[i]������arr���Ԫ�أ���a�ĵ�ַ��b��c�ĵ�ַ
		                            //*��arr[i]�����������ã���������a,b,c��ֵ
	}

	return 0;
}