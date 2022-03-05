#define _CRT_SECURE_NO_WARNINGS 1

//副作用 a++，     a+1 没有副作用

#include <stdio.h>

#define MAX(X,Y)  (X)>(Y)?(X):(Y)

int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++); //相当于 把 a++ 替换成宏定义中的X，b++替换成Y,并且是每一个都替换！！！！！
	//int max = (a++) > (b++) ? (a++) : (b++);是这个样子
	//然后判断时，a/b++，先使用，再++，比较时a=10，b=11，a<b,所以执行Y,此时a已经等于11，b=12
	//执行Y，就是b++，此时b等于12，即为max运算结果，然后b再++，b=13

	printf("%d\n", max); //12
	printf("%d\n", a);  //11
	printf("%d\n", b); //13

	return 0;
}