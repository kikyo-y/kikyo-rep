#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 9;
	float* pfloat = (float*)&n; //取n的地址，把他强制类型转换，那么此时， pfloat=&n
	                            //则*pfloat 解引用之后理论上就应该等于n的值
	printf("n的值为：%d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);

	*pfloat = 9.0;
	printf("num的值为：%d\n", n);    
	printf("pfloat的值为：%d\n", *pfloat)
	
		return 0;
}