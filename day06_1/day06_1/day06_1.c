#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
/*
	while for  do while
*/

	 
	int i = 0;
	while (i <= 10) {
		printf("%d\t", i);
		i++;
	}

	// while逆序练习
	// 输入1234 ，输出4321
	
	int num = 0;
	scanf("%d", &num);

	while (num > 0) {
		int k = num % 10;
		printf("%d", k);
        num = num / 10;
	}
	
	return 0;
}