#define _CRT_SECURE_NO_WARNINGS 1
//��д��������������ʱ��������һ���ַ����ĳ���

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
//	while (*str != '\0')   // *str ���ǽ����ã�ֻҪ���ǡ�\0��,��ֻҪ�����ַ��Ľ�����־
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int main()
{
	char arr[] = "bit";  //���ȶ���һ�����飬��������Ϊ�ַ�����bit��
	int len = my_strlen(arr);  //Ȼ������Լ������� my_strlen()������ע����ǣ����鴫����������ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	                           
	printf("len=%d\n", len);

	return 0;
}