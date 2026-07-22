#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_game() {

	//生成随机数
	//设置种子
	srand((unsigned)time(NULL)); // time返回time_t类型的值，随时间变化
	//设置随机范围 
	//rand实际生成0-30000多的数字
	int real_num = rand() % 100 + 1; // 1-100
	int guess_num = 0;

	do {

		printf("输入你猜的数字:");
		scanf("%d", &guess_num);
		if (guess_num > real_num) {
			printf("猜大了\n");
		}
		else if (guess_num < real_num) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n\n");
		}

	} while (real_num != guess_num);

}


int main() {

	// 猜数字游戏
	int input = 0;
	int num = 0;
	do {
		printf("================\n");
		printf("====1.猜数字====\n");
		printf("====2.退出  ====\n");
		printf("================\n");
		printf("\n请选择:");
		scanf("%d", &input);

		switch (input) {
		case 1:
			num_game();
			break;

		case 2:
			printf("退出游戏\n");
			break;

		default:
			printf("选择错误\n");

		}

	} while (input != 2);

	return 0;
}