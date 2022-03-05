#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 

int main()
{
	printf("%s\n", __FILE__); //__FILE__  （两个下横杠）打印出来的就是这个文件的绝对路径
	printf("%d\n", __LINE__); //打印本语句的行号
	printf("%s\n", __DATE__); //打印今天的日期
	printf("%s\n", __TIME__); //打印现在的时间
	
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");

	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}  //这个打印可在该文件下的，log.txt里查看

	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;

}