#define _CRT_SECURE_NO_WARNINGS 1
//编写函数不允许创建临时变量，求一个字符串的长度

#include <stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')   // *str 就是解引用，只要不是‘\0’,即只要不是字符的结束标志
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int main()
{
	char arr[] = "bit";  //首先定义一个数组，数组内容为字符串‘bit’
	int len = my_strlen(arr);  //然后调用自己创建的 my_strlen()函数，注意的是：数组传参数，传过去的不是整个数组，而是第一个元素的地址
	                           
	printf("len=%d\n", len);

	return 0;
}