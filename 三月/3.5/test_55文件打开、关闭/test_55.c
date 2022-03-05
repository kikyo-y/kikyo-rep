#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("C:\Users\97636\Desktop\demo\\txt", "r"); //第一个双引号里就填写txt的路径
					   //需要注意的是，\t 会发生别的组合，所以要多加一个\，取消
			           //如果没有这个文件，那么只读“r” ，就会报错，如果只写“w”，会自动创建一个新文件
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	fclose(pf);  //文件关闭
	pf = NULL;
	return 0;
}