#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("C:\Users\97636\Desktop\demo\\txt", "r"); //��һ��˫���������дtxt��·��
					   //��Ҫע����ǣ�\t �ᷢ�������ϣ�����Ҫ���һ��\��ȡ��
			           //���û������ļ�����ôֻ����r�� ���ͻᱨ�����ֻд��w�������Զ�����һ�����ļ�
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	fclose(pf);  //�ļ��ر�
	pf = NULL;
	return 0;
}