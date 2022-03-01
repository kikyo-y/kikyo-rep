#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//-1：10000001-------10000000000000000000000000000001 （原码）
	//                   11111111111111111111111111111110  (反码)
	//                   11111111111111111111111111111111  （补码）  -1的补码是全1！！！！！（记住）
	//a是char型，只能存一个字节，8个比特位，所以 a 在内存中以补码形式存在为：11111111

	char a = -1;
	//因为最后要打印出来的a是整型，但此时给a定义的是char类型，所以要进行整型提升
	//提升：负数，高位补1 -----11111111111111111111111111111 (补码)
	//转换一下反码和原码之后，a=-1

	signed char b = -1;
	//b同a

	unsigned char c = -1;
	//c是无符号，所以进行整型提升时，高位补0，0000000000000000011111111
	//是正整数，所以原码=反码=补码=255

	printf("a=%d,b=%d,c=%d\n", a, b, c);



//例题二
	//-128 = 10000000000000000000000010000000
	//反码 = 1111111111111111111111111011111111
	//补码 = 1111111111111111111111111100000000

//然后因为 %u 是打印无符号整数，则上面的补码就等于反码等于原码

	char d = -128;
	//1111111111111111111111111100000000
	printf("%u\n", d);


//例题三
	int i = -20;           //10000000000000000000000000010100
	                       //11111111111111111111111111101011
	                       //11111111111111111111111111101100  （i的补码）
	
	unsigned int j = 10;   //00000000000000000000000000001010   （j的原码=反码=补码）

	printf("%d\n", i + j); //11111111111111111111111111110110   （i+j的补码）
	                       //10000000000000000000000000001010    （i+j的原码）= -10
	

//例题四
	//unsigned int m;  //因为 m 是一个无符号数，那么它是一定大于等于0的
	
	//for (m = 9; m >= 0; m--) //那么判断条件永远成立，陷入死循环
	{
		//printf("%u\n", i);
		
	}


//!!!!!!!!!!!例题五!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	char o[1000];  //char类型能放的数是从：-128.....127  总共255个数字
	int n;
	for (n = 0; n < 1000; n++)
	{
		o[n] = -1 - n;
	}
	printf("%d\n", strlen(o)); // -1,-2,-3......-128，127，126.....1，\0



//例题六
	unsigned char k = 0; //char类型总共只可包含255个数字
	
	for (k = 0; k <= 255; k++) //for循环中的条件判断永远成立，所以结果陷入死循环
	{
		printf("hello world\n");
	}
	return 0;
}