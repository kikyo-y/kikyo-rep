/* ѧ���ɼ�����

ѧϰ�ɼ�>=90��------A
60-89------B
60����------C
*/

#include <stdio.h>

int main()
{
	int i;
	printf("������ɼ���\n");
	scanf("%d",&i);
	if(i>=0 && i<=100)
	{
		if(i>=90)
	      printf("�ɼ��ȼ�ΪA.\n");
     	else if(i>=60 && i<=89)
     	  printf("�ɼ��ȼ�ΪB.\n");
     	else if(i<60)
     	  printf("�ɼ��ȼ�ΪC.\n");	  
	 } 
	
	return 0;
	
	   
}
 
 
