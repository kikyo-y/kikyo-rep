#define _CRT_SECURE_NO_WARNINGS 1

//指针数组-----存放指针的数组

#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 4;
	int* arr[5] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{

		printf("%d\n", *(arr[i]));  //arr[i]是数组arr里的元素，即a的地址，b、c的地址
		                            //*（arr[i]）对他解引用，则结果就是a,b,c的值
	}

	return 0;
}