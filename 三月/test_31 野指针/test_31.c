#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int* test()
{
	int a = 10;
	return &a;    //��Ȼ���������û�������߼��д���a�Ǿֲ�����
	              //���õ�test������������������֮�����Ŀռ���ͷŸ�����ϵͳ��
	              //��ô���Ͳ��ܷ���a�ĵ�ַ
}

int main()
{
	int* p = test();
	printf("%d\n", *p);


//����ָ��һ��Ҫ��ʼ��
	int b = 1;
	int* q = &b;  //Ҫô��ָ��ָ��һ�����е�Ԫ�ص�ַ
	//int* q = NULL;  Ҫô������ָ���

	return 0;
}