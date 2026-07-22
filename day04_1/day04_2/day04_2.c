// 输入

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	int score = 0;
	printf("请输入一个整数：");
	scanf("%d", &score); 
	// &score表示取score变量的地址，scanf函数会将输入的整数存储到score变量中
	// & 是取地址符号，表示取变量的地址
	printf("你输入的整数是：%d\n", score);
	return 0;
}