#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//1、
int main()
{
	char arr1[10] = { 'a',98 };  //arr1[] 数组里包含的是 a，b。因为98的ASCII码值是b
	char arr2[] = "abcdef";
	printf("%d\n", sizeof(arr2)); //7 
	printf("%d\n", strlen(arr2)); //6

//2、
	char arr3[] = "abc";          //arr3 =   a  b  c  \0
	char arr4[] = { 'a','b','c' };  //arr4 =  a   b   c
	printf("%d\n", sizeof(arr3));//4
	printf("%d\n", sizeof(arr4));//3
	printf("%d\n", strlen(arr3));//3
	printf("%d\n", strlen(arr4));//34(随机值)，因为strlen 是找\0前的字符个数
	                             // 但是数组arr4[]没有\0，所有不知道后面有多少，有什么，所以就随机

//3、
char arr5[] = "abcdef";
int i = 0;
//int sz = sizeof(arr5) / sizeof(arr5[0])-1;  
int sz = strlen(arr5);
for (i = 0; i <= sz; i++)
{
	printf("%c", arr5[i]); //因为数组里是字符，所以需要 %c  ，如果是数字，就用%d
}
printf("\n");


//4、  数组在内存中是连续存放的
int arr6[] = {1,2,3,4,5,6,7,8};
int j = 0;
int num = sizeof(arr6)/sizeof(arr6[0]);
for (j = 0; j < num; j++)
{
	printf("&arr6[%d] = %p\n", j, &arr6[j]); //打印的是每个数组的地址
}
return 0;                                                                                                                                                                                                                                                                                                                                                                        
}