#define _CRT_SECURE_NO_WARNINGS 1
//���ַ����������м��ƶ���������ʾΪһ�������ַ�����һ����ĸ�ַ������˵��м䣬�𽥱�����
#include <stdio.h>

int main()
{
	int left = 0;
	char arr1[] = "###############";
	char arr2[] = "welcome to bit!";
	int sz = sizeof(arr1) / sizeof(arr1[0]); //������sizeof��������ĸ�����������ֱ���ú�����strlen����
	int right = sz - 1;                     //���磺strlen��arr1��  ����ֱ�Ӽ�������ĸ�������sz����ȵ�
	while (left <= right)                   //��������Ҫ�Ӹ� #include <string.h>
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		Sleep(100);  //�������������������arr1��2�滻��һ���±�����ͣ�٣������Ժ���Ϊ��λ
		system("cls");  //ִ��ϵͳ�����һ������-cls�����������Ļ
		left++;
		right--;
		printf("%s\n", arr1);
	}
		
	
	
	return 0;
}