// 输出
// 
// 占位符

#include <stdio.h>
int main() {
	printf("Hello, World!\n");
	printf("%d,%f,%s,%c\n",3,0.224,"牛逼",'k');
	// %f 可以打印float和double，为了区分，一般用%lf打印double
	printf("%e,%g\n", 0.224, 0.224); // %e表示科学计数法，
	//%g表示根据数值大小自动选择%f或%e,有效数字超过六位则使用科学计数法

	// %hd --> short int, %ld --> long int, %lld --> long long int
	// %u --> unsigned int, %lu --> long unsigned, %llu --> long long unsigned

	/*
	打印百分号
	*/
	printf("%%%d\n", 3); // 打印百分号需要使用%%
	
	
	/*
	控制打印位数(宽度)
	*/
	printf("%5d\n", 13); // 打印宽度为5，右对齐
	printf("%-5d，\n", 13); // 打印宽度为5,左对齐
	
	printf("%f\n", 3.141); // 默认打印小数点后六位数字
	printf("%.2f\n", 3.141); // 打印小数点后两位数字
	printf("%8.3f\n", 3.141); // 打印宽度为8(包括小数点)，小数点后两位数字，右对齐
	printf("%-8.3f\n", 3.141);
	// --->
	printf("%-*.*f\n",8, 3, 3.141); // 打印宽度为8(包括小数点)，小数点后两位数字，左对齐)
	
	/*
	控制字符串宽度
	*/
	printf("%s\n", "hello"); // 默认打印字符串
	printf("%.3s\n", "hello"); // 打印宽度为3 ,输出前3位

	return 0;
}