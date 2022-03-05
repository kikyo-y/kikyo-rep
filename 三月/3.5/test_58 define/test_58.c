#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//例一
#define MAX 100    // #define 定义标识符.  #define  名字  数值(字符内容)
#define STR "haha"


//例二
#define SQUARE(X) X*X   //SQUARE 就是宏，这种定义叫做宏定义
                       //()括号里的X就是一个参数，与主函数中的值对应并被替换，括号后面的表达式也是被主函数中的值（相当于替换完成的X）
					   //宏是完成替换的而不是传参，下面函数对应的会直接替换到X
//为了防止优先级导致结果出错，可以给宏加个括号
//例如： #define SQUARE(X) (X)*(X)


//例三
#define DOUBLE(X) ((X)+(X))   //如果写成，#define DOUBLE(X) X+X,或者#define DOUBLE(X) (X)+(X)
                             //结果就是 i = 10*5+5 = 55
                              
int main()
{
//例一
	int max = MAX;
	printf("%d\n", max);
	printf("%s\n", STR);


//例二
	int ret = SQUARE(5);
	int sum = SQUARE(5 + 1);
	printf("ret=%d\n", ret);
	printf("sum=%d\n", sum);  //11，因为X被替换成 5+1 ，后面的表达式----  5+1*5+1 = 11 ，
	                          //没有带括号，根据优先级高低进行运算


//例三
	int a = 5;
	int i = 10 * DOUBLE(a);
	printf("i=%d\n", i);

	return 0;
}