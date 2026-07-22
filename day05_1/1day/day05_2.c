

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
分支和循环语句1
*/


// 0 表示假，非 0 表示真
int main() {
	//int a = -7;
	//if (a) {
	//	printf("a is true\n");
	//}
	//else {
	//	printf("a is false\n");
	//}

	// 嵌套if-else语句

	int a = 0;
	if (a > 0) {
		printf("正数\n");
	}
	else if (a < 0) {
		printf("负数\n");
	}
	else {
		printf("零\n");
	}

	// 关系表达式通常会返回 0 或 1，0 表示假，1 表示真		
	// <  >  <=  >=  ==  !=
	
	// i< j < k ,i =3 ,j = 8 , k = 5.这是先判断 i < j 得1，再判断 1 < k 得 1，最终结果为真。

	//逻辑运算符
	// && 逻辑与，两个条件都为真，结果才为真
	// || 逻辑或，两个条件有一个为真，结果就为真

	/*
	------------
	条件操作符
	------------
	*/

	int num1 = 10;
	num1 > 5 ? printf("num1 > 5\n") : printf("num1 <= 5\n");

	int num2 = 0;
	num2 = (num1 > 5 ? 1 : 2);
	printf("num2 = %d\n", num2);
	
	// 练习，找最大值
	int max = (num1 > num2 ? num1 : num2);
	printf("max = %d\n", max);


	/*
	
	对于逻辑运算符的运行顺序，C语言规定是从左到右的顺序进行运算的。
	*/

	int i = 0 , a = 0 ,b = 2 , c = 3 , d = 4;
	i = (a++ && ++b && d++);
	printf("i = %d , a = %d , b = %d , c = %d , d = %d\n", i, a, b, c, d);
	// 运行结果为 i = 0 , a = 1 , b = 2 , c = 3 , d = 4
	// 由于 a++ 的结果为 0，后面的 ++b 和 d++ 就不会执行了，所以 b 和 d 的值没有改变。
	// 对于|| 逻辑或运算符也是一样的，只有当第一个条件为假时，才会去判断第二个条件。
	return 0;
}  