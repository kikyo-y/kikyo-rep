#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);  //数组名就是数组首元素的地址①
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr); //对数组名解引用，看看对应的元素是不是数组的首元素，则可确定①

	printf("%p\n", &arr); //取出的是整个数组的地址，不是首元素的地址

	return 0;
}