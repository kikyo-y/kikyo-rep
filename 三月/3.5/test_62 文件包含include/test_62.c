#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //��ͷ�ļ��ǿ��ļ�����������ô����<  > ��������д, ����ʱֱ��ȥ���ļ����ң��Ҳ����ͱ���
#include "Add.h"  //��ͷ�ļ��Ǳ����ļ�����������ô����˫����" "��д������ʱ���ڱ����ļ�----��ȥ���ļ�----�Ҳ����ͱ���
           

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;
}