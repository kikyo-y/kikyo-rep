#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int* test()
{
	int a = 10;
	return &a;    //虽然这个代码结果没错，但是逻辑有错误，a是局部变量
	              //调用的test（）函数，在运行完之后，她的空间就释放给操作系统了
	              //那么他就不能返回a的地址
}

int main()
{
	int* p = test();
	printf("%d\n", *p);


//定义指针一定要初始化
	int b = 1;
	int* q = &b;  //要么让指针指向一个现有的元素地址
	//int* q = NULL;  要么就让他指向空

	return 0;
}