#define _CRT_SECURE_NO_WARNINGS 1

//strcpy ------copy a string  ����һ���ַ���
#include <stdio.h>
#include <assert.h>

int my_strcpy(char* arr, char* str) //��Ϊ������ã�ֱ�ӵ��õĻ�������Ԫ�صĵ�ַ��������Ҫ��������������
{                                  //����Ҫȡ��ַʹ�ã�char������arr1��2�����ͣ������е����ֿ������д
	assert(arr != NULL);
	assert(str != NULL); //assert�Ƕ��ԣ����������������������Ļ����ͻ���ֹ����

	while (*str != '\0') //*str ���Ƕ���������ã�����ʱ��ַ���±꣩���������ݲ����� '\0',�ͼ��������滻
	{
		*arr = *str;
		arr++;
		str++;
	}
	*arr = *str; //�൱�ڵ�����arr2�����ˣ���\0ʱ����\0�滻��arr1����ͬ�����±�λ�ã��ͽ�������
}                                

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	//strcpy(arr1, arr2); //arr2��ġ�b i t \0�� �滻��arr1��ġ�a b c d��
	//�����ֱ�ӵ���strcpy()�������������Լ�����һ����������������

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}