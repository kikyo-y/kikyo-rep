#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* pfwrite = fopen("TEXT.txt", "w");
	if (pfwrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	fputc('b', pfwrite);  //‘b’ 是要写入的内容，pfwrite ，是写入到哪里去
	fputc('i', pfwrite);
	fputc('t', pfwrite);

	fclose(pfwrite);
	pfwrite = NULL;


//读文件
	FILE* pfread = fopen("TEXT.txt", "r");
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));

	fclose(pfread);
	pfread = NULL;

	return 0;
}