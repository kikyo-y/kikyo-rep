// ��ӡ�����еġ�ˮ�ɻ���������һ����λ����������ֵ���������������
// ���磺153= 1������ + 5������ + 3������

#include <stdio.h>

int main()
{
	int i,j,k,result;
	for(i=1; i<10; i++)    //��ΪҪ����������λ��������i������ҪΪ1����100����� 
	{
		for(j=0; j<10; j++)
		{
			for(k=0; k<10; k++)
			{
				result = i*i*i + j*j*j + k*k*k ;
				
				if(i*100 + j*10 +k == i*i*i + j*j*j + k*k*k)
				 
				   printf("%d\n",result);
				  
			}
		}
	}
	
	return 0;
 } 
