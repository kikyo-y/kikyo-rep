#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int k = 66;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz - 1; i++)
	{
		if (arr[i] == k)   //���ֱ����forѭ����������ֵĻ������Ͻ�
		{
			printf("�ҵ��ˣ��±��ǣ�%d", i);
			break;  //�������break�Ļ����ҵ�������ӡ���±�󣬻���forѭ����ֱ���������ж���������ô�����if��������ô�����������
		}
	}
	if (i > sz - 1)
		printf("�Ҳ���\n");

	return 0;
}