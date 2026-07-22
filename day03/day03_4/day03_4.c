
/*
运算符
*/


#include <stdio.h>
int main() {
	
	int a = 4;
	int b = 5;

	printf("%d\n", 4 + 5);
	printf("%d\n", a + b);
	
	printf("%d\n", 4 - 5);
	printf("%d\n", a - b);

	printf("%d\n", 4 * 5);
	printf("%d\n", a * b);

	printf("%d\n", 4 / 5);
	printf("%d\n", a / b);

	int c = 10;
	printf("%d\n", c / 4); // 整数除法，结果为整数
	printf("%f\n", c / 4.0);  // 浮点数除法，/号左右有一个浮点数即可
	
	double d = 10.0;
	printf("%f\n", d / 4); // 浮点数除法，/号左右有一个浮点数即可

	int score = 5;
	// 计算百分比
	printf("%f\n", score / 20.0 * 100);
	printf("%f\n", score / 20 * 100.0);
	/*
	两个输出是不一样的，前者是浮点数除法，后者是整数除法，由于乘除是同级运算，
	按照从左到右的顺序进行运算，所以前者是浮点数除法，后者是整数除法
	前者实际是0.25*100，而后者是0*100	
	*/

	//  % 取模，只能用于整数，结果是余数
	printf("%d\n", 10 % 3);

	// 取模的应用1
	// 判断一个数是奇数还是偶数
	// 偶数能被2整除，奇数不能被2整除

	// 取模的应用2
	// 得到一个数的个位数，个位数和十位数，，，，

	// 负数取模的正负是根据前面的被除数的正负来决定的
	printf("%d\n", -10 % 3); // -1
	printf("%d\n", 10 % -3); // 1
	printf("%d\n", -10 % -3); // -1

	//  单目操作符，在当前语句中，d++，d会先被使用，
	// 而后d才会加1，++d，d会先加1，而后d才会被使用
	int num1 = 20;
	num1 += 10; // num1 = num1 + 10;
	printf("%d\n", num1);
	printf("%d\n", num1++);
	printf("%d\n", ++num1);
	printf("%d\n", num1--);
	printf("%d\n", --num1);

	int k = 10;
	int p = k++;  // p == 10
	printf("%d\n", p); // 10
	printf("%d\n", k); // 11
	printf("%d\n", -k); // -11


	// 复合赋值
	printf("%d\n", num1 += 10); // num1 = num1 + 10;
	printf("%d\n", num1 -= 10); // num1 = num1 - 10;
	printf("%d\n", num1 *= 10); // num1 = num1 * 10;
	printf("%d\n", num1 /= 10); // num1 = num1 / 10;


	// 强制类型转换
	double num5 = 3.14;
	num5 = (int)num5; // 强制类型转换，num5变为3,只留整数部分
	int num6 = (int)10.9;

	int num7 = 10;
	double num8 = (double)num7;

	return 0;
}