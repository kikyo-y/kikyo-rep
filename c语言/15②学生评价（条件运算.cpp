//学生成绩评价
/*
条件运算符     表达式1 ? 表达式2 ：表达式3  
 如果满足表达式1的条件，则执行表达式2
 否则就执行表达式3 

*/

#include <stdio.h>

int main()
{
	int score;
	char grade;
	printf("请输入分数："); 
	scanf("%d",&score);
	
	grade = (score>=90) ?'A' : ((score>=60)?'B' : 'C'); //满足表达式1，则执行等级为A 
	 //          1                   2                  不满足则有两种情况 
	printf("%c\n",grade);                              //满足表达式2，则执行等级为B 
	                                                   //不满足的话，执行等级为C 
	return 0; // 上面是最终答应出等级ABC,所以是字符 
 } 
