#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//1��
int main()
{
	char arr1[10] = { 'a',98 };  //arr1[] ������������� a��b����Ϊ98��ASCII��ֵ��b
	char arr2[] = "abcdef";
	printf("%d\n", sizeof(arr2)); //7 
	printf("%d\n", strlen(arr2)); //6

//2��
	char arr3[] = "abc";          //arr3 =   a  b  c  \0
	char arr4[] = { 'a','b','c' };  //arr4 =  a   b   c
	printf("%d\n", sizeof(arr3));//4
	printf("%d\n", sizeof(arr4));//3
	printf("%d\n", strlen(arr3));//3
	printf("%d\n", strlen(arr4));//34(���ֵ)����Ϊstrlen ����\0ǰ���ַ�����
	                             // ��������arr4[]û��\0�����в�֪�������ж��٣���ʲô�����Ծ����

//3��
char arr5[] = "abcdef";
int i = 0;
//int sz = sizeof(arr5) / sizeof(arr5[0])-1;  
int sz = strlen(arr5);
for (i = 0; i <= sz; i++)
{
	printf("%c", arr5[i]); //��Ϊ���������ַ���������Ҫ %c  ����������֣�����%d
}
printf("\n");


//4��  �������ڴ�����������ŵ�
int arr6[] = {1,2,3,4,5,6,7,8};
int j = 0;
int num = sizeof(arr6)/sizeof(arr6[0]);
for (j = 0; j < num; j++)
{
	printf("&arr6[%d] = %p\n", j, &arr6[j]); //��ӡ����ÿ������ĵ�ַ
}
return 0;                                                                                                                                                                                                                                                                                                                                                                        
}