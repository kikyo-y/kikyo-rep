#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//��һ������������strlen()�������㳤���ٴ�ӡ
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//������Ƕ�׺���
//int main()
//{
//	int len = 0;
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	// 3            2               1
	//���ȵ�һ��printf��ӡ��������43���������Ȼ����������巵�ظ�2�����ַ��ĸ�������2
	//���ʱ��Ϊprintf("%d",printf("%d",2));
	//��ô�ڶ���printf��ӡ�����ľ�������2����Χ����һ��printf����һ���ַ���������1
	//printf("%d",1);����һ��printf��ӡ��������1
	//���ս��Ϊ4321
	return 0;
}