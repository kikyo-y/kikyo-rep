#include <stdio.h>

//法①
/*int main()
{
	int i,j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;	//break 是用来终止for循环和switch的，不能终止if	
		}
		if(i<=j)   //这边如果没有判断的话，即使有i%j不等于0的，在break之后，就会直接输出打印
		printf("%d\n", i); //加了if判断，在i<=200之前，不满足的就重新进入第一个for循环，满足的就输出，再进入循环
	}

	return 0;
}
*/

int main()
{
	int i, j,z;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i / 2; j++)//巧用两倍关系，或者平方
		{
			if ( i % j == 0)
				break;
		}
		if (j>=i/2)
			printf("%d\n", i);
	}

	return 0;
}
