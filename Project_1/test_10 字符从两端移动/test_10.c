#define _CRT_SECURE_NO_WARNINGS 1
//让字符从两端向中间移动，可以演示为一个符号字符，被一个字母字符从两端到中间，逐渐被代替
#include <stdio.h>

int main()
{
	int left = 0;
	char arr1[] = "###############";
	char arr2[] = "welcome to bit!";
	int sz = sizeof(arr1) / sizeof(arr1[0]); //除了用sizeof计算数组的个数，还可以直接用函数：strlen（）
	int right = sz - 1;                     //例如：strlen（arr1）  即可直接计算出他的个数，和sz是相等的
	while (left <= right)                   //不过他需要加个 #include <string.h>
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		Sleep(100);  //调用这个函数，可以在arr1和2替换了一个下标后进行停顿，且是以毫秒为单位
		system("cls");  //执行系统命令的一个函数-cls，用于清空屏幕
		left++;
		right--;
		printf("%s\n", arr1);
	}
		
	
	
	return 0;
}