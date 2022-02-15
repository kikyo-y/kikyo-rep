//输出九九乘法表


#include <stdio.h>
 
int main()
{
	int i,j,result;
	
	for( i=1; i<10; i++ )
	{
		for( j=1; j<=i; j++)
		{
			result = i*j;
			printf("%d*%d=%-3d", j,i,result);   // %-3d 使每一行左对齐，从而一行中右边的也会空三格 
		}
		printf("\n");    //使每完成一行就换一行 
	}
 } 
