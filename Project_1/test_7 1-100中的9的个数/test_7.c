#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)  //��10ȡ�࣬����Ϊ9���ͰѸ�λ��9���ҳ���
		{
			printf("%d\n", i);
			count++;
		}
		if (i / 10 == 9)  //����10����9.�Ͱ�ʮλ��9���ҳ���
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}