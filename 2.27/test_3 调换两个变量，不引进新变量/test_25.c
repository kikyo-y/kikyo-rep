#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 5;  
	int b = 3; 
	printf("before:a=%d,b=%d\n", a, b);
//��1���Ӽ��� ----�����ܻ������
	 a = a + b;  // ��ʱa=8,b=3   ע�⣺���︳ֵ���㣬�����ټ�int a=  ,�����൱�ڶ�θ�a��ʼ�����ᱨ��
	 b = a - b;  // ��ʱa=8,b=5
	 a = a - b;  // ��ʱa=3,b=5
	printf("after:a=%d,b=%d\n", a, b);


//��2����λ���-----(�����ʱ���������λ�����Բ������)
	int i = 5;  //00...00   101
	int j = 3;  //00...00   011 
	
	i = i ^ j; //           110----6   ��ʱi=6=110��
	                        //             j=3=011
	j = i ^ j; //                          j=  101----5
	i = i ^ j; //
	printf("after:i=%d,j=%d\n", i, j);

	return 0;
}