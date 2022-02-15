//统计字符个数
//输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数

#include <stdio.h>

int main()
{
	char c;   //字母，空格，数字，特殊符号这些都算字符，所以要定义为char型 
	int letters = 0,spaces = 0,digits = 0,others = 0;
	
	printf("请输入一些字母：\n");
	scanf("%c",&c);
	
	while((c=getchar())!='\n')  //getchar() 是数据库函数中的函数，指从终端获得一个字符的ASCII码值 
	{
		 if(c>='a' && c<='z' || (c>='A' && c<='Z'))
		   letters++;
		 else if(c>='0' && c<='9')
		   digits++;
		 else if(c==' ')
		   spaces++;
		 else
		   others++;
	}
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
	return 0;
	
 } 
