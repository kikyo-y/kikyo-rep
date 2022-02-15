//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	char arr2[] = {7,8,9,10,11,12,13,14,15,16};
	int sz = sizeof(arr1) / sizeof(arr1[0]);  //计算数组的元素个数
	int i = 0;
	int temp=0;
	for (i = 0; i <= sz-1; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d", arr1[i]);
	}

	printf("\n");
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d", arr2[i]);
	}

	return 0;
}