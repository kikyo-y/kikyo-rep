#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��strlen()���ַ�������ʱ��Ҫ�ҵ� \0 �Ż�ֹͣ

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

	printf("%d\n", len1); //arr1��abcdef �������\0���������ĳ��Ⱦ���6
	printf("%d\n", len2); //arr2û�� \0����������ͣ���ˣ����ֵ

	char arr3[] = "abc";
	if (strlen(arr3) - strlen(arr1) < 0)
		printf("hehe\n");  //��Ϊstrlen() ����������ַ����������޷�����������Զ���ڵ���0
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