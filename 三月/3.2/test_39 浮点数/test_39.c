#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 9;
	float* pfloat = (float*)&n; //ȡn�ĵ�ַ������ǿ������ת������ô��ʱ�� pfloat=&n
	                            //��*pfloat ������֮�������Ͼ�Ӧ�õ���n��ֵ
	printf("n��ֵΪ��%d\n", n);
	printf("*pfloat��ֵΪ��%f\n", *pfloat);

	*pfloat = 9.0;
	printf("num��ֵΪ��%d\n", n);    
	printf("pfloat��ֵΪ��%d\n", *pfloat)
	
		return 0;
}