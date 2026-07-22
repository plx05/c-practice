
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 练习1数组
// 演示字符从俩端移动，向中间汇聚
int main() {

	char arr1[] = "Welcome to C!!!";
	char arr2[] = "###############";
	//int sz = sizeof(arr1) / sizeof(arr1[0])-1;
	int sz = strlen(arr1);
	 
	int i = 0;
	int j = 0;
	for (i = 0; i < (sz + 1) / 2;i++) {
		arr2[i] = arr1[i];
		arr2[sz-i-1] = arr1[sz-i-1];
		for (j = 0;j < sz;j++) {
			printf("%c", arr2[j]);
			 
		}
		printf("\n");
	}



	// 练习2数组
	// 给定一个升序的数组，在这个数组找到对应的值n，并且打印下标，找不到就说“找不到”




	return 0;
}