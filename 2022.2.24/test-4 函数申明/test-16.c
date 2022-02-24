#define _CRT_SECURE_NO_WARNINGS 

//函数声明：在源文件下再新建一个 .c 文件,进行对函数的声明
//函数定义：在头文件下新建一个 .h 文件，进行对函数的定义
//函数运用：不需要再重新对函数进行声明和定义，

//#include <stdio.h>
//int Add(int x, int y);  //当函数的定义在主函数的下面，则需要在开头对函数进行声明 
//                        // 声明时括号里的参数只要标明类型，x和y可以不用写。  括号外要加分号，作为一个语句
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int sum = Add(a, b);   //对Add（）函数进行运用
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


//如果已经在别的地方声明并定义好了函数，那么主函数可以直接写为：
#include <stdio.h>
#include "定义.h"

int main()
{
	int a =65;
	int b = 8;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
