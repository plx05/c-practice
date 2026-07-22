#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	// 数组
	// 语法：type arr_name[length]
	// type 是数组元素的类型

	int math[3];
	char ch[10];
	double score[50];

	// 初始化 

	// 完全初始化
	int data[4] = { 1 , 3, 5, 7 };

	// 不完全初始化,除了被赋值的部分，其他全为0
	int data1[5] = { 2 , 5 };

	// 不写长度的初始化,系统根据输入的值，自动计算长度
	int data2[] = { 4, 5, 6, 8 };

	// 数组元素的打印
	int arr[5] = { 1,2,3,4,5 };
	printf("%d\n", arr[3]);
	// arr[i]就是一个值，[]是一个引用操作符，拿出所在位置的值

	// 修改元素的值
	arr[3] = 40;
	printf("%d\n", arr[3]);

	// arr元素的输入,arr元素是一个值，还需要取地址,变量名是地址
	scanf("%d", &arr[3]);

	// 打印数组元素的地址
	for (int i = 0;i < 5;i++) {
		printf("arr[%d]的地址是%p\n", i, &arr[i]);
	}
	// 每个元素地址相差一个int的字节大小，(如果是其他类型，那就是其他大小)可知数组的元素地址是连续叠放的

	// 计算元素个数
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr_length = sizeof(arr1) / sizeof(arr[0]); // sizeof(arr1) 得到的是arr1的长度
	printf("元素个数:%d\n", arr_length);
	// 如果是char arr [] = "abcd"; 要得到不包括\0的长度，要-1
	// 但是char arr[] = {a,b,c,d};就不用-1




	// -------------

	// 二维数组

	// -------------
	printf("-------二维数组------\n");

	int arr3[3][3] =
	{
	  {1,2,3},
	  {4,5,6},
	  {7,8,9},
	};
	// 初始化，完全与不完全，原理与一维的一样，不被赋值的默认为0.
	// [][] 只能不写行，但不能不写列

	// 打印二维数组的值
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr3[i][j]);

		}
	}

	//在内存里，他们的位置是连续的，跨行的时候也是，差距为类型的字节大小
	//这为指针使用打下基础

	//变长数组，c99允许我们使用变量定义数组的长度
	//例如
	int n = 0;
	scanf("%d", &n);
	int arr4[n]; // 变长数组不能初始化
	

	return 0;
}