#include <stdio.h>

//����
/*int main()
{
	int i,j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;	//break ��������ֹforѭ����switch�ģ�������ֹif	
		}
		if(i<=j)   //������û���жϵĻ�����ʹ��i%j������0�ģ���break֮�󣬾ͻ�ֱ�������ӡ
		printf("%d\n", i); //����if�жϣ���i<=200֮ǰ��������ľ����½����һ��forѭ��������ľ�������ٽ���ѭ��
	}

	return 0;
}
*/

int main()
{
	int i, j,z;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i / 2; j++)//����������ϵ������ƽ��
		{
			if ( i % j == 0)
				break;
		}
		if (j>=i/2)
			printf("%d\n", i);
	}

	return 0;
}
