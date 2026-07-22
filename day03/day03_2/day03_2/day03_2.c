/*
  signed与unsigned 
  命名规则
  局部变量和全局变量
*/

// 全局变量
int num1 = 10;

#include <stdio.h>
int main() {
	// signed int == int  有负数
	// char 不确定有无符号
	// unsigned的好处是同样的最大值增大了一倍
	
	short int;
	signed short int;
	unsigned short int;

	// 字符存储的时候是以ASCII码的形式存储的，ASCII码是一个7位的编码，范围是0~127，
	// 所以char类型也是整型
	

	unsigned int a = 0;
	unsigned long b = 0;
	unsigned long long c = 0;
	printf("%u\n",a);
	printf("%lu\n",b);
	printf("%llu\n",c);

	/* 
	命名规则：
	1，不能以数字开头
	2，不能使用关键字
	3，区分大小写   aa 和 AA 是两个不同的变量
	4，不能使用标点符号，只能由下划线，数字还有字母构成
	5，变量名字要有意义，不使用单个字母
	*/

	// 定义flaoat
	float d= 3.14f;
	double e = 3.14;
	
	{
		int num1 = 11;
		int num2 = 10;
		printf("%d\n", num1); // 局部变量和全局变量同名时，优先使用局部变量

	}
	// printf("%d\n", num2); 不可以
	
	 printf("%d\n", num1);  // 可以

	 // 想重新赋值变量,不能修改类型
	 num1 = 20;
	 printf("%d\n", num1);  
	
	return 0;
}