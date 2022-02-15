//输出101到200之间的素数 （素数指除了1和它本身不能被其他数整除) 也叫质数------相对应的是合数 

#include <stdio.h>

int main()
{
	int i,j;
	for(i=101; i<=200; i++)
	{
		for(j=2; j<i; j++)
		{
		    if(i%j==0)           //这样使当有一个j不是1也不是i本身，却能被i整除时，            
			  break;             //则跳出循环
		}                      
		if(j>=i)
		    printf("%d\n",i);      //当j大于i时，说明2到i-1没有数能被i整除，则i为素数           	                          
			                                
	/*if(i%j!=0)
	     printf("%d",i);
	  else
	     break;              
	错误写法，这样写的话，j一直循环，每次符合条件,都会把i输出一下
	*/
	 		                           										
	}
	
	return 0;
 } 
