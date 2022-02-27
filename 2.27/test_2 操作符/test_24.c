#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//一、算数操作符 （+，—，*，/，%）
int main()
{
	int a = 5 / 2; //商2----除法
	int b = 5 % 2; //余1----百分号取模
	printf("%d\n", a);
	printf("%d\n", b);
	double c = 5 / 2.0;  //要想打印出来是浮点数，那么除数和被除数其中有一个需要为小数形式
	printf("%lf\n", c);  //double-----lf ， float------f


//二、移位操作符（  >>  是右移操作符，移动的是二进制位 ）  ------（只能用于整数）

	int i = 2;    //i是整型，4个字节，32个比特位，所以i=00000000000000000000000000000010
	int j = i >> 1; //i向右移，所以j=00000000000000000000000000000001
	printf("%d\n", j);

//（1）、算术右移----右边丢弃，左边补上原来的符号位
//（2）、逻辑右移----右边丢弃，左边补0
//（3）、左移------左边补0    (乘以2)

	int k = -1;  //存储在内存中，是以补码的形式，正数的补码是他本身，负数就要以变化的补码形式
	             //所以 i=10000000000000000000000000000001  -1的原码
	             //       11111111111111111111111111111110  -1的反码（除了符号位，其他全部取反）
	             //       11111111111111111111111111111111  -1的补码（反码的末位+1）
	int l = k >> 1;
	printf("%d\n", l);

	int m = 2;
	int n = m << 1;
	printf("%d\n", n);



//三、位操作符  （只能用于整数）
	//  &    按位与---- 只要有一个0，就是0
	//  |    按位或---- 只要有一个1，就是1
	//  ^    按位异或---相同为0；相异为1

	int q = 5;       //00000000000000000000000000000101----5
	int w = 6;       //00000000000000000000000000000110----6
	
	int e = q & w;   //00000000000000000000000000000100----4
	int t = q | w;   //00000000000000000000000000000111----7
	int y = q ^ w;   //00000000000000000000000000000011----3
	printf("%d\n", e);
	printf("%d\n", t);
	printf("%d\n", y);
	return 0;
}