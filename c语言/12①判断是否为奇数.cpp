//判断101到200之间的素数（奇数（单数）就是不能被2整除的数 

#include <stdio.h>

int main()
{
	int i;
	printf("请输入101到200之间的任意一个整数\n");
	scanf("%d",&i);
	if(i>=101 && i<=200)
	{
		if(i%2!=0)
		  printf("这个数是奇数\n");
		else
		  printf("这个数不是奇数\n");
	}
	else
	  printf("错误，请重新输入\n");
	
	return 0;
 } 
