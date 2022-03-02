#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test(int arr[])   //首元素地址是int整型，所以为四个字节
{
	int sz = sizeof(arr) / sizeof(arr[0]);  //8 / 4 =2
	printf("%d\n", sz);
}

int main()
{
//例题一
	int arr[10] = { 0 };  //因为是64位的电脑，所以数组是占8个字节
//	test(arr);  //数组传参传过去的是首元素的地址


//例题二
	char arr1[] = "abcdef";
	char* pc = arr1; //数组首元素的地址存放到pc里去
	printf("%s\n", arr1);
	printf("%s\n", pc);


//例题三
	char* p = "abcdef"; //字符串把首字符的地址传到指针p去
	printf("%s\n", p);



//例题四
	const char* pa = "abcdef";  //不能在不加const的情况下写，加了const，那么他是修饰*pa，不可被更改
	*p = 'w';  //会犯段错误
	printf("%s\n", p);
	return 0;
}