#define _CRT_SECURE_NO_WARNINGS 1

//����1/1 - 1/2 + 1/3 -1/4....... + 1/99 - 1/100��ֵ
#include <stdio.h>

int main()
{
	int i;
	double sum = 0.0;//��Ϊ�������С��
	int flag = 1;   //��Ϊ��Ŀ�ķ���һ��һ�������仯����ô�Ͷ���һ����־�������Ʒ��ű仯
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);//��Ϊi��int�ͣ�1/1=1,1/2=0...1������Ҳ�ǣ��������������1������Ҫʹ���ΪС����1��i֮����һ��Ҫ�Ǹ�����
		flag = -flag;
	}                  
	printf("%lf", sum); //double���͵�ֵҪ��lf��float�������ȣ���f
	return 0;
}