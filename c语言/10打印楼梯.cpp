// ��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц��

#include <stdio.h>

int main()
{
	int i,j;
	printf("11\n");      //Ц����ASCII����1 
	for(i=1; i<10; i++)
	{
		for(j=1; j<=i; j++)
		printf("%c",200);   //��ɫ���ӵ�ASCII����200 
		printf("\n");      //һ�������Ҫ��һ�� 
	}
	
	return 0;
 } 
