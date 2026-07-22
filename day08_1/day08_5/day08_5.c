#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int a;

int b = 0; //这种在全部函数体之外定义的变量就是全局变量

void test1() {
	int n = 10;
	n++;
	printf("%d ", n);
}

void test2() {
	static int m = 10;  //static修饰（局部变量），延长了生命周期，m不会销毁，但是作用域不变
	// 在第二次循环与之后的循环，不会再执行int定义步骤，而是延续n++后的值
	m++;
	printf("%d ", m);
}

int main() {

	// static和extern关键字
	/*
	static是静态的意思，可以用来修饰全局变量，局部变量还有函数
	extern是用来声明外部符号的，当你想要使用其他文件的变量函数
	你可以用extern声明
	*/
	
	/*
	全局变量的作用域是一整个程序，生命周期是直到程序结束
	局部变量的作用域是变量所在的局部范围，生命周期是从作用域被创建到结束
	*/

	for (int i = 0;i < 5;i++) {
		test1();
		// 每轮循环结束，n的生命周期就结束，重新进入就是重新定义赋值了
	}
	// 输出：11 11 11 11 11

	for (int i = 0;i < 5;i++) {
		test2();
	}


	return 0;
}