#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* p[] = {arr1,arr2,arr3};

	int i = 0; //为什么这边不能用i=1？？？？？？？？？？？？？？？？？？？？？？
	for (i = 0; i < 3; i++)  //i就相当于数组1，2，3
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(p[i] + j));
		}
		printf("\n");
	}

		return 0;
}