#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int arr[], int sz)  //��void�ͣ���Ϊû�з���ֵ������
{
	int i = 0;
	for (i = 0; i <sz - 1; i++)      
	{
		//int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)  //������j < sz-1-i,��Ϊ��sz-1��������ĸ���������ټ�i����Ϊ����j���Դ�987654321�����ݼ�
			                               //��Ϊ������i��ѭ���ڲ�
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
				//flag = 0;
			}
			
		}
		//if (flag == 1)
			//break;
	}
}

int main()
{
	int i = 0;
	int arr[] = { 4,5,1,2,6,7,3,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);      
	bubble_sort(arr, sz);     //����

	for (i = 0; i < sz; i++)    //��Ϊ����arr[]�ܹ��У�sz-1������
	{
		printf("%d", arr[i]);
	}

	return 0;
}