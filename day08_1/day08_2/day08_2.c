#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		return true;

	else
		return false;
}

void test() {

	int n = 0;
	scanf("%d", &n);
	if (n = -1)
		return;     // return有和break类似功能，可以什么都不返回
					// 但是return是直接结束这个函数，break只是跳出最近的循环，
					// 函数仍然在运行
	else
		printf("%d\n", n);
}

// 对于函数里的语句，要保证每个分支都有return，不然会报错
// 返回类型如果不写，系统会默认为int


int main() {

	

	return 0;
}