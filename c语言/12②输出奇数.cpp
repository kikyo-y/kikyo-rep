//101到200之间所有奇数都打印出来

#include <stdio.h>

int main()
{
	int i;
	for(i=101; i<=200; i++)
	{
		if(i%2!=0)
		{
		  printf("%d\n",i);  //这里直接把i的值输出即可，不需要再调用取地址啥的 
		}
	    
	}
	
	return 0;
 } 
