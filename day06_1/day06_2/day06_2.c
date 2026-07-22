#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// for 循环，最常用的循环
	// 语法
	/*
	for( 语句一 ; 语句二 ; 语句三)
	一：初始化表达式
	二：循环的判断条件
	三：循环结束变量的调整
	他们都可以省略不写
	*/

	for (int i = 0; i < 10; i++) {
		printf("%d\t", i);
	}
	// 此处i只是局部变量，只能在循环里面用


	// 练习：得到1-100的三的倍数的数字之和

	int sum1 = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum1 += i;
		}
	}
	printf("%d\n", sum1);

	// 或者优化
	int sum2 = 0;
	for (int i = 3;i <= 100;i += 3) {
		sum2 += i;
	}
	printf("%d\n", sum2);

	
	/*
	do{
	   语句;
	  }while(表达式)；

	先做再判断,至少执行了一次
	*/

	int num3 = 1;
	do {
		printf("%d\t", num3);
		num3++;
	} while (num3 <= 10);

	// continue break
	for (int i = 0;i < 10;i++) {
		
		if (i == 5) {
			continue;
		}
		// continue会跳过它后面的代码，进入下一轮循环
		
		printf("%d\t", i);
	}

	//下面这个程序会掉入死循环
	//int i = 0;
	//while (i <= 10) {
	//	if (i == 5) {
	//		continue;
	//	}

	//	printf("%d ", i);
	//	i++;

	//}
	// 当程序运行到i==5，循环一直满足continue的条件 ，而一直跳过i++
	// 一直是i==5，i<=10

	return 0;
}