//�������������Լ��  Ҫ��շת�����
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int i = 46;
//	int j = 22;
//	int k = 0;
//	printf("������������\n");
//	scanf("%d,%d\n", &i, &j);
//
//	while (i % j != 0)
//	{
//		k = i % j;
//		i = j;
//		j = k;
//	}
//	printf("%d", j);
//
//	return 0;
//}

int main()
{
	int i = 39;
	int j = 3;
	scanf("%d,%d", &i, &j);
	if (i > j)
	{
		for (j; j > 0; j--)
		{
			if (i % j == 0)
				break;
		}
		printf("%d", j);
	}

	return 0;
}