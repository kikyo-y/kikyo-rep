//输出国际象棋棋盘，8行*8列的黑白相间的棋子构成

#include <stdio.h>

int main()
{
	int i,j;
	for(i=1; i<=8; i++)
	{
		for(j=1; j<=8; j++)
		{
			if((i+j)%2==0) 
			  //方法一 
			  printf("%c%c",'*','*'); //%d,表示输出十进制整数， %c，表示输出一个字符，%s--表示字符串 
			  //方法二
			  //printf("%s","**"); 
			else
			  printf(" ");
		}
	    printf("\n");   //使每完成一行即换行，在i的for循环里面 
	}
	//return 0;
 } 
