#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()         ����n�Ľ׳�
//{
//	int i;
//	int sum = 1;
//	scanf("%d", &i);
//	for (i; i >= 1; i--)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	for (j = 1; j <= 10; j++)
	{
		ret = 1;   //��Ϊÿ�ν׳�ʱ����ı�ret��ֵ���������¿�ʼһ���µ�ֵ����Ҫ��ret���¸�ֵΪ1
		for (i = 1; i <= j; i++)  //�����forѭ���ǽ���n�Ľ׳�
		{
			ret *= i;
		}
		sum = sum + ret;   //����֮�������
	}
	printf("%d", sum);

	return 0;
}