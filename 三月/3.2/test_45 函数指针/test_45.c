#define _CRT_SECURE_NO_WARNINGS 1

//����ָ�룬��ָ������ָ��

// &������ �� ������ ��һ���ģ����Ǻ����ĵ�ַ
#include <stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 4;

	int arr[10] = { 0 };
	int(*p)[10] = &arr; //����ָ��

	int c = Add(a, b);
	printf("%d\n", c);

	printf("%p\n", Add); 
	printf("%p\n", &Add);

	//����ָ��
	int (*pa)(int, int) = Add; // ��*pa��˵�����Ǹ�ָ�����ͣ���int��int��˵�����Ǻ�����������������������int����

	printf("%d\n", (*pa)(2, 8));

	return 0;
}