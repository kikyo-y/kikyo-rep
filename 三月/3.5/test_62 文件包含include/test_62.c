#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //当头文件是库文件所包含，那么就用<  > 尖括号来写, 查找时直接去库文件查找，找不到就报错
#include "Add.h"  //当头文件是本地文件所包含，那么就用双引号" "来写，查找时先在本地文件----再去库文件----找不到就报错
           

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;
}