#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Add(int* p)  //��Ϊadd��������Ҫ����ֵ��������void���ͣ������Ƿ��ʵ�num�ĵ�ַ������p��ָ������
{
	(*p)++;   //++�����ȼ���*�ߣ�����������ŵĻ��������p��++�ˣ������ϣ���������������*pȥ++
}

int main()
{
	int num = 0;
	Add(&num);   //��Ϊ����ĺ����޷�ֱ�Ӹı�num��ֵ��ֻ�ܷ������ĵ�ַ����ȥ�ı�����ֵ
	printf("num=%d\n", num);
	return 0;
}