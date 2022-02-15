#define _CRT_SECURE_NO_WARNINGS 1

//计算1/1 - 1/2 + 1/3 -1/4....... + 1/99 - 1/100的值
#include <stdio.h>

int main()
{
	int i;
	double sum = 0.0;//因为最后结果是小数
	int flag = 1;   //因为题目的符号一正一副发生变化，那么就定义一个标志，来控制符号变化
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);//以为i是int型，1/1=1,1/2=0...1，后面也是，所以最后结果等于1。所以要使结果为小数，1和i之间有一个要是浮点型
		flag = -flag;
	}                  
	printf("%lf", sum); //double类型的值要用lf，float（单精度）用f
	return 0;
}