#define _CRT_SECURE_NO_WARNINGS 1

//strcpy ------copy a string  拷贝一个字符串
#include <stdio.h>
#include <assert.h>

int my_strcpy(char* arr, char* str) //因为数组调用，直接调用的话就是首元素的地址，但是需要的是它整个数组
{                                  //所以要取地址使用，char是数组arr1和2的类型，函数中的名字可以随便写
	assert(arr != NULL);
	assert(str != NULL); //assert是断言，如果括号里的条件不成立的话，就会终止程序

	while (*str != '\0') //*str 就是对数组解引用，当此时地址（下标）的数组内容不等于 '\0',就继续进行替换
	{
		*arr = *str;
		arr++;
		str++;
	}
	*arr = *str; //相当于当数组arr2结束了，到\0时，把\0替换给arr1的相同数组下标位置，就结束交换
}                                

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	//strcpy(arr1, arr2); //arr2里的“b i t \0” 替换到arr1里的“a b c d”
	//这个是直接调用strcpy()函数，还可以自己创建一个函数，用来交换

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}