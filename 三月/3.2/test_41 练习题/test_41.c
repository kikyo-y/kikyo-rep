#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcde";
	char* p1 = "abcde";  //��Ϊ�������ַ����ǳ��������ᱻ�޸ģ���ô�����ڴ��е�ʱ���ֻ��һ����
	char* p2 = "abcde";  //p1 ��p2 ��Ķ����ַ�������Ԫ�ص�ַ�����Զ�����ͬ��

//	printf("%p\n", arr1); //00000076C56FF9E4	
//	printf("%p\n", arr2); //00000076C56FFA04

	if (arr1 == arr2)  //�����������ڴ��п϶����ڲ�ͬ�Ŀռ䣬��ͬ�ĵ�ַ�������������϶���һ��
		printf("hehe\n");
	else
		printf("haha\n");

	if(p1 == p2) 
		printf("hehe\n");
	else
		printf("haha\n");



		 
	return 0;
}