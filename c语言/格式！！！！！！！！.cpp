格式
1、主要格式 

#include <stdio.h>
int main()
{
 } 
 
 2、printf
  ①printf();
  ②printf("  \n");   //在代码开头提示用户输入信息，引号里面就是要输入的内容 
  ③printf("%d,%d,%d\n",i,j,k); //在代码最后打印出的东西（数字等
  （%d-------指输出十进制整数   格式为：
                                       printf("%d\n",a);
									   printf("%d%d\n",a,b); 
    %c-------指输出一个字符     格式为：
	                                   char ch = 'a';
									   printf("%c",ch); 
	%s-------指输出一个字符串，即大于等于2个字符时，就可以用
	                            格式为：
	                                  printf("%s","**");
	                                  也可以表示为两个字符
	                                  printf("%c%c",'*','*');
	                                   
 3、scanf
  ①scanf("%d,%d,%d",&a,&b,&c); /*根据printf提示的信息输入数据 
                                也可以是"%d%d%d",一个需要逗号隔开，一个不需要 */ 
   
