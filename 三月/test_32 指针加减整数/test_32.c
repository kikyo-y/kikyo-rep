#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

//һ��ָ��Ӽ�����

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //��Ϊarr��������ĵ���Ԫ�ص�ַ������ֱ�Ӹ���ָ��p�� 
	               //���Ҫ�Ӻ���ǰ����ô  int* p = &arr[9];��������ȡ����ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *p);
		p++;  // p = p+1;  Ҳ����������ʾ
	}



//����ָ��Ӽ�ָ��
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);  //&arr[9] - &arr[0]
	

	return 0;
}