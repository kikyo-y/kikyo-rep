#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//在数组中，除了以下两种情况，其他的数组名都表示首元素的地址
// 1、sizeof（数组名） ------此时数组名表示整个数组
// 2、&（数组名）------------此时数组名也表示整个数组
//并且这两种情况是唯一的格式，多了或者少了都不算！！！！！
int main()
{
//一、整型数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a)); //sizeof（数组名），则a表示整个数组，sizeof就是求整个数组的长度 16
	                           //数组元素为int整型，所以每一个都为4个字节，总共就是            
	printf("%d\n", sizeof(a + 0)); // 此时的a表示首元素的地址，首元素向后移0位，地址还是一样的  8

	printf("%d\n", sizeof(*a)); //此时a表示首元素地址，对a解引用，那么 *a 就是首元素           4
	                            //所以sizeof就是求首元素的大小，int类型                       
	printf("%d\n", sizeof(a + 1)); // a表示首元素地址，向后移一位，就是第二个元素地址           8

	printf("%d\n", sizeof(a[1])); //a[1]表示数组第二个元素，求它的大小                        4

	printf("%d\n", sizeof(&a)); // &a 表示取出的是数组的地址，也是地址                        8                          

	printf("%d\n", sizeof(*&a)); // &a取出的是整个数组的地址，*&a解引用，就是整个数组
	                             // sizeof求整个数组的长度                                   16

	printf("%d\n", sizeof(&a + 1)); //&a表示取出整个数组的地址，整个数组往后移一个，还是一个地址  8
	                                                                      
	printf("%d\n", sizeof(&a[0])); //取出的是首元素的地址                                      8

	printf("%d\n", sizeof(&a[0] + 1)); //&a[0]表示取出首元素的地址，往后加1，就是去第二个元素的地址 8



//二、字符数组
   //1、sizeof ------计算所占空间大小
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", sizeof(arr)); //此时arr表示的整个整个数组，sizeof求整个数组的大小
	                             //每个元素都是占一个字节的单个字符，总共有六个           6
	              //补充（要计算 \0 的是在字符串中"abcdef"，sizeof（arr）需要加，共7
	              //如果是字符串，用strlen（arr） 是6
	printf("%d\n", sizeof(arr + 0)); // arr是首元素的地址，加0后还是首元素的地址          8

	printf("%d\n", sizeof(*arr)); // arr是首元素的地址，*arr解引用，则就是首元素的内容
	                              // 首元素是个占一个字节的字符                         1
	printf("%d\n", sizeof(arr[1])); //arr[1]是第二个元素的内容，一个字符                 1

	printf("%d\n", sizeof(&arr)); //&arr表示取出整个数组的地址，还是地址                  8

	printf("%d\n", sizeof(&arr + 1)); // &arr表示整个数组的地址，加1之后是跳过整个数组，还是地址  8

	printf("%d\n", sizeof(&arr[0] + 1)); //arr[0]表示首元素的内容，&arr[0]是取首元素的地址
	                                     // 再加1，就是第二个元素的地址                         8



//2、strlen-----------求字符串长度（找 \0 ，\0之前的就是字符串的长度）（找地址）
	printf("%d\n", strlen(arr)); //用strlen求字符串长度时，找到\0 ，才会停止，这里没有     随机值

	printf("%d\n", strlen(arr + 0)); //arr表示首元素的地址，加0还是首元素的地址，没有\0    随机值
	
	//printf("%d\n", strlen(*arr)); //arr表示首元素地址，*arr解引用，求出来的就是首元素内容'a'
	                              //a的ASCII码是97，相当于strlen对97求长度，错误写法
	//printf("%d\n", strlen(arr[1])); //同上一题，传的是字符'b'的ASCII码值，错误写法
	
	printf("%d\n", strlen(&arr)); //&arr表示取整个数组的地址，没有\0，                    随机值
	
	printf("%d\n", strlen(&arr + 1)); //&arr表示整个元素地址，+1表示跳过整个元素，从下一个地址开始
	                                  //找不到\0，                                      随机值
	                                                        //比之前整个数组的少6，因为跳过了6个元素
	printf("%d\n", strlen(&arr[0] + 1)); //取得是第二个元素的地址，找不到\0               随机值
	                                                                       //比之前整个数组的少1

	return 0;
}