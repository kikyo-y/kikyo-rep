/* 学生成绩评价

学习成绩>=90，------A
60-89------B
60以下------C
*/

#include <stdio.h>

int main()
{
	int i;
	printf("请输入成绩：\n");
	scanf("%d",&i);
	if(i>=0 && i<=100)
	{
		if(i>=90)
	      printf("成绩等级为A.\n");
     	else if(i>=60 && i<=89)
     	  printf("成绩等级为B.\n");
     	else if(i<60)
     	  printf("成绩等级为C.\n");	  
	 } 
	
	return 0;
	
	   
}
 
 
