#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 2000; i++)
	{
		if (i % 400 == 0)
		{
			printf("%d\n", i);
			count++;
		}
		if (i % 4 == 0 && i % 100 != 0)  //if (i % 4 == 0 && i % 100 != 0 || i%400 ==0)   �߼���������������ν��У��������ȼ���
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

