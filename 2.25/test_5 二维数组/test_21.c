#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr1[3][4] = { 1,2,3,4,5};
	int arr2[3][4] = { { 1,2,3 }, {4,5} };



	int i = 0;
	
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			//printf("%d\n", arr1[i][j]);

//二维数组也是连续存放的
			printf("&arr1[%d][%d] = %p\n",i,j, &arr1[i][j]);
		}
	}




	return 0;
}