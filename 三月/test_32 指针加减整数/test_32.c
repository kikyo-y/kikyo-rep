#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

//一、指针加减整数

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //因为arr就是数组的的首元素地址，可以直接赋给指针p； 
	               //如果要从后往前，那么  int* p = &arr[9];这样才是取到地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *p);
		p++;  // p = p+1;  也可以这样表示
	}



//二、指针加减指针
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);  //&arr[9] - &arr[0]
	

	return 0;
}