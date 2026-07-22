#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

// 判断闰年的函数定义
bool is_leap_year(int year) {
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return true;
	else
		return false;
}