//ͳ���ַ�����
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���

#include <stdio.h>

int main()
{
	char c;   //��ĸ���ո����֣����������Щ�����ַ�������Ҫ����Ϊchar�� 
	int letters = 0,spaces = 0,digits = 0,others = 0;
	
	printf("������һЩ��ĸ��\n");
	scanf("%c",&c);
	
	while((c=getchar())!='\n')  //getchar() �����ݿ⺯���еĺ�����ָ���ն˻��һ���ַ���ASCII��ֵ 
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
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n",letters,digits,spaces,others);
	return 0;
	
 } 
