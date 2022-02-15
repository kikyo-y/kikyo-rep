//将一个正整数分解成质因数（即是这个整数的因数，并且本身是质数

#include <stdio.h>

int main()
{
	int i,j;
    printf("请输入一个正整数：\n");
    scanf("%d",&i);
    printf("%d=",i); 
    
    if(i==1)
	  printf("1"); 
    
    for(j=2; j<=i; j++)
    {
    	while(i%j==0)                // 这里用 if 和 while 不同 
    	{                           // if是判断语句，判断一次满足条件即完成了这个if语句 
    		printf("%d",j);         //但是while是循环语句，他会一直执行，直到不满足（）里的条件 
    		i=i/j;                   //这里相当于把i的一个质因数提出来之后，再看
			                  
    		if(i!=1)                 //这里是当i不断提取质因数，自己最后就会变成1 
    		  printf("*");           //此时就应该停止了 
		}
	}
    return 0;
 } 
