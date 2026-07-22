// switch语句，是一种特殊的if else语句

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
语法
switch(整型表达式) {
	case 常量1:
		语句1;
		break;
	case 常量2:
		语句2;
		break;
	default:
		语句3;
		break;
}

*/

int main() {

	int a = 0;
	scanf("%d", &a);
	switch (a % 3) {
	case 0:
		printf("a能被3整除\n");
		break;
	
	case 1:
		printf("a除以3余1\n");
		break;
	
	case 2:
		printf("a除以3余2\n");
		break;

	}


	int day = 0;
	scanf("%d", &day);
	switch (day) {
	
	case 1:
		printf("星期一\n");
		break;
	
	case 2:
		printf("星期二\n");
		break;
	
	case 3:
		printf("星期三\n");
		break;
	
	case 4:
		printf("星期四\n");
		break;
	
	case 5:
		printf("星期五\n");
		break;
	
	case 6:
		printf("星期六\n");
		break;
	
	case 7:
		printf("星期七\n");
		break;
	
	default:
		printf("输入错误，请输入1-7的数字");
		break;
	
	
	}

	// 练习，输入星期，判断是否是工作日
	int day1 = 0;
	scanf("%d", &day1);
	switch (day1) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}


	return 0;
}