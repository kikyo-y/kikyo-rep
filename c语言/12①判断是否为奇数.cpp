//�ж�101��200֮������������������������ǲ��ܱ�2�������� 

#include <stdio.h>

int main()
{
	int i;
	printf("������101��200֮�������һ������\n");
	scanf("%d",&i);
	if(i>=101 && i<=200)
	{
		if(i%2!=0)
		  printf("�����������\n");
		else
		  printf("�������������\n");
	}
	else
	  printf("��������������\n");
	
	return 0;
 } 
