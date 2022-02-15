//5的第二种方法
 #include <stdio.h>
  
 int main()
 {
 	int a,b,c,t; 
	int swap(int *x,int *y);       //定义一个swap函数，这样就可以调用函数两两对比，不用写三次 
	                             //swap函数形式： swap(int *x,int *y)    所以后面也是这个 
 	printf("请输入三个任意整数：（用一个空格隔开）\n"); 
 	 
	scanf("%d%d%d",&a,&b,&c);     //先输入三个任意数            
 	swap(&a,&b);                //依次调用swap函数进行比较输出 
	swap(&a,&c); 
	swap(&b,&c); 
	
	printf("%d %d %d",a,b,c);           //输出三个从小到大的数       
  } 
  
  int swap(int *x,int *y)
  {
  	int t;                   //这里还需要再重新定义一下t，因为swap函数和main函数不是一个函数，
	                           //里面的数据元素也不一样，不定义那么t就是莫名其妙的东西 
  	if(*x > *y)
  	{
  		t = *x;                //这里顺序一定不要搞错！！！！！ 
  		*x = *y;
  		*y = t;
	  }
  	
   } 
