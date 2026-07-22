#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/*
	goto语句和跳转标号，goto语句可以在同一个函数内跳转到设置好的标号处
	*/
	int i = 1;
	printf("一级\n");
	goto next;

	printf("二级\n");

next:
	printf("三级\n");

	// goto的应用场景：break只能跳过一层循环；而用goto可以跳出所有循环 

	return 0;
}