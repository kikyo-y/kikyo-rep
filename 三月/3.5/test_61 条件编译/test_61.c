#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define __DEBUG__
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef __DEBUG__     //������Щ��䲻���������������������Щ�����Ҫ������ô�Ͷ���һ��DEBUG,
		             //ֻ�����ͷ���궨��Ż��������룬  #define __DEBUG__
		printf("%d", arr[i]);
#endif
	}

	return 0;
}