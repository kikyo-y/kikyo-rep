#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test(int arr[])   //��Ԫ�ص�ַ��int���ͣ�����Ϊ�ĸ��ֽ�
{
	int sz = sizeof(arr) / sizeof(arr[0]);  //8 / 4 =2
	printf("%d\n", sz);
}

int main()
{
//����һ
	int arr[10] = { 0 };  //��Ϊ��64λ�ĵ��ԣ�����������ռ8���ֽ�
//	test(arr);  //���鴫�δ���ȥ������Ԫ�صĵ�ַ


//�����
	char arr1[] = "abcdef";
	char* pc = arr1; //������Ԫ�صĵ�ַ��ŵ�pc��ȥ
	printf("%s\n", arr1);
	printf("%s\n", pc);


//������
	char* p = "abcdef"; //�ַ��������ַ��ĵ�ַ����ָ��pȥ
	printf("%s\n", p);



//������
	const char* pa = "abcdef";  //�����ڲ���const�������д������const����ô��������*pa�����ɱ�����
	*p = 'w';  //�᷸�δ���
	printf("%s\n", p);
	return 0;
}