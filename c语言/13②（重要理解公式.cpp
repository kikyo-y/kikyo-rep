//ˮ�ɻ���

#include <stdio.h>

int main()
{
	int i,j,k,r;
	for(r=100; r<1000; r++)
	{
		i=r/100;       //��iΪ����İ�λ�� 
		j=r/10%10;
		k=r%10;         //i��j����10����ʣ�µ���������k 
		              //������ʽ�Ӽ���˵��  r= i*100 + j*10 + k 
		if(r==(i*i*i + j*j*j + k*k*k))
		  printf("%d\n",r); 
		
	}
 } 
