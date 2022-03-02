#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcde";
	char* p1 = "abcde";  //因为这两个字符串是常量，不会被修改，那么存在内存中的时候就只存一个，
	char* p2 = "abcde";  //p1 和p2 存的都是字符串的首元素地址，所以都是相同的

//	printf("%p\n", arr1); //00000076C56FF9E4	
//	printf("%p\n", arr2); //00000076C56FFA04

	if (arr1 == arr2)  //两个数组在内存中肯定是在不同的空间，不同的地址，所以他们两肯定不一样
		printf("hehe\n");
	else
		printf("haha\n");

	if(p1 == p2) 
		printf("hehe\n");
	else
		printf("haha\n");



		 
	return 0;
}