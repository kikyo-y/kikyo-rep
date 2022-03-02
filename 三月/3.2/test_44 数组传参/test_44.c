#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//例一
void test(int arr[])  //用一个整型数组来接收，（没指定大小）可以
{}

void test(int arr[10]) //还是用一个整型数组来接收，不过是指定大小的，正好可以接收，可以
{}

void test(int* arr) //数组传过来的是首元素的地址，是int型的，那么int的地址就是 int* ，所以可以用指针来接收，可以
{}

void test2(int* arr2[20]) //用一个存放整型指针的数组来接收，正好符合，（20可以省略）可以
{}

void test2(int** arr2)//一级指针的地址正好存到二级指针中去，可以
{}


int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };

	test(arr); //传过去一个整型数组
	test2(arr2); //传过去一个存放整型指针的数组，还是相当于存数组

	return 0;
}



//例二、二维数组传参

void test3(int arr[][5])  //方框里的元素个数，行可以省略，但是列不可以省！！！
{}

void test4(int (*arr3)[5]) //数组用指针接收的话，要用数组指针的形式
{}


int main()
{
	int arr3[3][5] = { 0 };

	test3(arr3);
	test4(arr3); //二维数组传的是第一行的地址，那就不单单是一个首元素的地址了
	             // 第一行就是个一维数组，所以传过去的是个一维数组的地址

	return 0;
}



//当一个函数的参数部分是一级指针，则在main函数中传的是什么？   二级指针同理
void test5(int *p)
{}


int main()
{
	int a = 10;
	test5(&a);  //这样传参数，可以，传个地址

	int* pa = &a;  //或者提前取好a的地址，传过去
	test5(pa);
	

	return 0;
}
