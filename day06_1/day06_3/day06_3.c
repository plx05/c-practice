#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	// 循环嵌套
	//
	// 找出100-200的素数
	int i = 100;
	int j = 2;
	int k = 1;
	for (i = 100;i <= 200;i++) {
		
		k = 1;

		for (j = 2;j < i;j++) {
			if (i % j == 0)
			{
				k = 0;
				break;
			}
		}
		if(k)
		printf("%d ", i);

	}

	printf("\n");
	
	// 优化

	i = 100;
	j = 2;
	k = 1;
	for (i = 101;i <= 200;i += 2) {

		k = 1;

		for (j = 2;j * j <= i;j++) {
			if (i % j == 0)
			{
				k = 0;
				break;
			}
		}
		if (k)
			printf("%d ", i);

	}


	return 0;
}