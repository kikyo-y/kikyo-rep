//多位数求和
//求s=a+aa+aaa+aaaa....的值，其中a是一个数字

#include <stdio.h>

int main()
{
	int i,k,n,s=0;
	printf("请输入i和n: (数字之间用空格隔开)\n"); //多个n是用来约束多位数有几位，在循环中会递减 
	scanf("%d%d",&i,&n);
	
	k=i;
	while(n>0)   //不要再用if语句!!!!!if是判断，while是循环！！！！！ 
	{
		s+=k;     //首先s=i=k， 后面就是s=s+k               s=4 
		i=i*10;  //i先扩大十倍，4---40，40---400            4--40
		k+=i;    //k=k+i，此时k相当于40+4=44，   或者       44
		n--;
	}
	printf("a+aa+aaa+...=%d\n",s);
	
	return 0;
 } 
