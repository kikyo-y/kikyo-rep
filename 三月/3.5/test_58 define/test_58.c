#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��һ
#define MAX 100    // #define �����ʶ��.  #define  ����  ��ֵ(�ַ�����)
#define STR "haha"


//����
#define SQUARE(X) X*X   //SQUARE ���Ǻ꣬���ֶ�������궨��
                       //()�������X����һ�����������������е�ֵ��Ӧ�����滻�����ź���ı��ʽҲ�Ǳ��������е�ֵ���൱���滻��ɵ�X��
					   //��������滻�Ķ����Ǵ��Σ����溯����Ӧ�Ļ�ֱ���滻��X
//Ϊ�˷�ֹ���ȼ����½���������Ը���Ӹ�����
//���磺 #define SQUARE(X) (X)*(X)


//����
#define DOUBLE(X) ((X)+(X))   //���д�ɣ�#define DOUBLE(X) X+X,����#define DOUBLE(X) (X)+(X)
                             //������� i = 10*5+5 = 55
                              
int main()
{
//��һ
	int max = MAX;
	printf("%d\n", max);
	printf("%s\n", STR);


//����
	int ret = SQUARE(5);
	int sum = SQUARE(5 + 1);
	printf("ret=%d\n", ret);
	printf("sum=%d\n", sum);  //11����ΪX���滻�� 5+1 ������ı��ʽ----  5+1*5+1 = 11 ��
	                          //û�д����ţ��������ȼ��ߵͽ�������


//����
	int a = 5;
	int i = 10 * DOUBLE(a);
	printf("i=%d\n", i);

	return 0;
}