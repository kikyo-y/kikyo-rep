//水仙花数

#include <stdio.h>

int main()
{
	int i,j,k,r;
	for(r=100; r<1000; r++)
	{
		i=r/100;       //让i为结果的百位数 
		j=r/10%10;
		k=r%10;         //i和j都被10除后，剩下的余数就是k 
		              //这三个式子即想说明  r= i*100 + j*10 + k 
		if(r==(i*i*i + j*j*j + k*k*k))
		  printf("%d\n",r); 
		
	}
 } 
