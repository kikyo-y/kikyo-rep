#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int k = 66;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz - 1; i++)
	{
		if (arr[i] == k)   //如果直接在for循环里面改数字的话，不严谨
		{
			printf("找到了，下标是：%d", i);
			break;  //如果不加break的话，找到数并打印出下标后，还在for循环，直到不满足判断条件，那么下面的if就无论怎么样都会输出了
		}
	}
	if (i > sz - 1)
		printf("找不到\n");

	return 0;
}