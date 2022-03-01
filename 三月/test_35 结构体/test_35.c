#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//写法一
//struct Stu      //struct----结构体关键字      Stu------结构体标签（想取什么取什么）            
//{               //struct Stu --------结构体类型，只定义了一个人类型，不占取内存空间（图纸）
//	char name[20];
//	short age;
//	char tele[15];
//	char sex[3];
//};  //分号不可缺少


//写法二
/*struct Stu
{
	char name[20];
	short age;
	char tele[15];
	char sex[3];
}S1,S2,S3;*/  //这里三个是全局的结构体变量（尽量不要这么写）

//int main()
//{
//	struct Stu s;  // s 是结构体变量
//
//	return 0;
//}


//写法三
typedef struct Stu  //typedef ----把类型重新取个名字
{
	char name[20];
	short age;
	char tele[15];
	char sex[3];
}Stu;  //相当于原来的名字叫:struct Stu , 现在直接改成 Stu，就可以直接用他来定义变量

int main()
{
	Stu s1={"张三",24,"12341244","女"};  //定义一个变量，数组要加双引号""，一个字符就用单引号''

	printf("%s\n", s1.name);  //这里注意不同类型要分清，格式是：变量名.名字-++
	printf("%d\n", s1.age);
	printf("%s\n", s1.tele);
	printf("%s\n", s1.sex);

	return 0;
}