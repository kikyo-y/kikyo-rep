#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//д��һ
//struct Stu      //struct----�ṹ��ؼ���      Stu------�ṹ���ǩ����ȡʲôȡʲô��            
//{               //struct Stu --------�ṹ�����ͣ�ֻ������һ�������ͣ���ռȡ�ڴ�ռ䣨ͼֽ��
//	char name[20];
//	short age;
//	char tele[15];
//	char sex[3];
//};  //�ֺŲ���ȱ��


//д����
/*struct Stu
{
	char name[20];
	short age;
	char tele[15];
	char sex[3];
}S1,S2,S3;*/  //����������ȫ�ֵĽṹ�������������Ҫ��ôд��

//int main()
//{
//	struct Stu s;  // s �ǽṹ�����
//
//	return 0;
//}


//д����
typedef struct Stu  //typedef ----����������ȡ������
{
	char name[20];
	short age;
	char tele[15];
	char sex[3];
}Stu;  //�൱��ԭ�������ֽ�:struct Stu , ����ֱ�Ӹĳ� Stu���Ϳ���ֱ���������������

int main()
{
	Stu s1={"����",24,"12341244","Ů"};  //����һ������������Ҫ��˫����""��һ���ַ����õ�����''

	printf("%s\n", s1.name);  //����ע�ⲻͬ����Ҫ���壬��ʽ�ǣ�������.����-++
	printf("%d\n", s1.age);
	printf("%s\n", s1.tele);
	printf("%s\n", s1.sex);

	return 0;
}