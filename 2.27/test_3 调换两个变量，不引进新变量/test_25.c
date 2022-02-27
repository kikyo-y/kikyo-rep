#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 5;  
	int b = 3; 
	printf("before:a=%d,b=%d\n", a, b);
//法1、加减法 ----（可能会溢出）
	 a = a + b;  // 此时a=8,b=3   注意：这里赋值运算，不用再加int a=  ,这样相当于多次给a初始化，会报错
	 b = a - b;  // 此时a=8,b=5
	 a = a - b;  // 此时a=3,b=5
	printf("after:a=%d,b=%d\n", a, b);


//法2、按位异或-----(在异或时不会产生进位，所以不会溢出)
	int i = 5;  //00...00   101
	int j = 3;  //00...00   011 
	
	i = i ^ j; //           110----6   此时i=6=110，
	                        //             j=3=011
	j = i ^ j; //                          j=  101----5
	i = i ^ j; //
	printf("after:i=%d,j=%d\n", i, j);

	return 0;
}