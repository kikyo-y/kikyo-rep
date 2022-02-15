// 打印出所有的“水仙花数”，即一个三位数，其各数字的立方等于它本身。
// 例如：153= 1的立方 + 5的立方 + 3的立方

#include <stdio.h>

int main()
{
	int i,j,k,result;
	for(i=1; i<10; i++)    //以为要让他保持三位数，所以i最起码要为1，即100多的数 
	{
		for(j=0; j<10; j++)
		{
			for(k=0; k<10; k++)
			{
				result = i*i*i + j*j*j + k*k*k ;
				
				if(i*100 + j*10 +k == i*i*i + j*j*j + k*k*k)
				 
				   printf("%d\n",result);
				  
			}
		}
	}
	
	return 0;
 } 
