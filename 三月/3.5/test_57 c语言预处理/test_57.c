#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 

int main()
{
	printf("%s\n", __FILE__); //__FILE__  �������º�ܣ���ӡ�����ľ�������ļ��ľ���·��
	printf("%d\n", __LINE__); //��ӡ�������к�
	printf("%s\n", __DATE__); //��ӡ���������
	printf("%s\n", __TIME__); //��ӡ���ڵ�ʱ��
	
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");

	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}  //�����ӡ���ڸ��ļ��µģ�log.txt��鿴

	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;

}