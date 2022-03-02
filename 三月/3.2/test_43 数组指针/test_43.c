#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

//指针数组 ------存放指针的数组
	int* arr1[10];


//数组指针
	a=1;
	b='c';
	int* p1 = &a; //整型指针，因为它指针指向整型
	char* p2 = &b; //字符指针

	int arr2[5];
	int (*p3)[5] = &arr2;//取出arr2的地址，赋给int类型的指针
	                   //*p3  说明它是一个指针，并且它指向一个有五个元素的数组，并且元素类型是int型
	                    //观察p3 是什么类型，将式子中的p3去掉，int（*）[5]，所以它是一个指向数组的指针


	return 0;
}