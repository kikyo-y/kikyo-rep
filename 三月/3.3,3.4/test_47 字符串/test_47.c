#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//用strlen()求字符串长度时，要找到 \0 才会停止

int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c','d','e','f' };

	int len1 = strlen(arr1);
	int len2 = strlen(arr2);

	printf("%d\n", len1); //arr1的abcdef 后面就有\0，所以它的长度就是6
	printf("%d\n", len2); //arr2没有 \0，所以它就停不了，随机值

	char arr3[] = "abc";
	if (strlen(arr3) - strlen(arr1) < 0)
		printf("hehe\n");  //因为strlen() 函数求出的字符串长度是无符号整数，永远大于等于0
	else
		printf("haha\n");

	int ret = my_strlen(&arr1);
	printf("%d\n", ret);

	if (my_strlen("abc") - my_strlen("abcdef") < 0)
		printf("hehe\n");
	else
		printf("haha\n");



	return 0;
}