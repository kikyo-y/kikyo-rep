#define _CRT_SECURE_NO_WARNINGS 1

//������ a++��     a+1 û�и�����

#include <stdio.h>

#define MAX(X,Y)  (X)>(Y)?(X):(Y)

int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++); //�൱�� �� a++ �滻�ɺ궨���е�X��b++�滻��Y,������ÿһ�����滻����������
	//int max = (a++) > (b++) ? (a++) : (b++);���������
	//Ȼ���ж�ʱ��a/b++����ʹ�ã���++���Ƚ�ʱa=10��b=11��a<b,����ִ��Y,��ʱa�Ѿ�����11��b=12
	//ִ��Y������b++����ʱb����12����Ϊmax��������Ȼ��b��++��b=13

	printf("%d\n", max); //12
	printf("%d\n", a);  //11
	printf("%d\n", b); //13

	return 0;
}