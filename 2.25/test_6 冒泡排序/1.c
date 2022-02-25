#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int arr[], int sz)  //是void型，因为没有返回值！！！
{
	int i = 0;
	for (i = 0; i <sz - 1; i++)      
	{
		//int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)  //这里是j < sz-1-i,因为（sz-1）是数组的个数，其次再减i，是为了让j可以从987654321这样递减
			                               //因为它是在i的循环内部
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
				//flag = 0;
			}
			
		}
		//if (flag == 1)
			//break;
	}
}

int main()
{
	int i = 0;
	int arr[] = { 4,5,1,2,6,7,3,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);      
	bubble_sort(arr, sz);     //传参

	for (i = 0; i < sz; i++)    //因为数组arr[]总共有（sz-1）个数
	{
		printf("%d", arr[i]);
	}

	return 0;
}