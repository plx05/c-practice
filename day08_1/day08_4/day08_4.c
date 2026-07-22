#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "is_leap_year.h"


// -------------
// 嵌套函数
// 与链式访问
// -------------



int get_days_of_month(int year, int month);	 // 函数声明放在main前

int main() {
	int do_order = 0;
	do {
		printf("------------------\n");
		printf("--输入年月得天数--\n");
		printf("--    1.开始    --\n");
		printf("--    2.退出    --\n");
		printf("------------------\n");
		scanf("%d", &do_order);

		if(do_order==1){	
			int year = 0;
			int month = 0;
			printf("输入当前年月：");
			scanf("%d %d", &year, &month);
			int days = get_days_of_month(year, month);
			printf("当前月份的天数是：%d\n", days);
		}
		}while (do_order == 1);
	return 0;
}


// 函数的定义

int get_days_of_month(int year, int month) {
	int days = 0;
	int days_of_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month != 2)
		days = days_of_month[month - 1];
	else if (is_leap_year(year))
		days = 29;
	return days;
}