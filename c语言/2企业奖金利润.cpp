#include <stdio.h>
int main()
{
	double profit,bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	printf("请输入企业的利润为：（单位元）");
	scanf("%lf",&profit);//输入企业的利润， 
	 bonus1=100000*0.1;
	 bonus2=bonus1+100000*0.75;
	 bonus4=bonus2+200000*0.05;
	 bonus6=bonus4+200000*0.03;
	 bonus10=bonus6+4000000*0.015;
	 if(profit<=100000)
	   bonus=profit*0.1;
	 else if (profit<=200000)
	   bonus=bonus1+(profit-100000)*0.075;
	 else if (profit<=400000)
	   bonus=bonus2+(profit-200000)*0.05;
	 else if (profit<=600000)
	   bonus=bonus4+(profit-400000)*0.03;
	 else if (profit<=1000000)
	   bonus=bonus6+(profit-600000)*0.015;
	 else if (profit>1000000)
	   bonus=bonus10+(profit-1000000)*0.01;
    printf("提成为：bonus=%lf\n",bonus);   
	
}
