// 打印楼梯，同时在楼梯上方打印两个笑脸

#include <stdio.h>

int main()
{
	int i,j;
	printf("11\n");      //笑脸的ASCII码是1 
	for(i=1; i<10; i++)
	{
		for(j=1; j<=i; j++)
		printf("%c",200);   //黑色格子的ASCII码是200 
		printf("\n");      //一行输完后要换一行 
	}
	
	return 0;
 } 
