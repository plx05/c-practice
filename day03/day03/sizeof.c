// 数据长度与sizeof

#include <stdio.h>

int main() {
	
	// 1 表示一个字节，8个比特

	printf("sizeof(_Bool) = %zu\n", sizeof(_Bool));
	
	
	printf("sizeof(char) = %zu\n", sizeof(char));
	printf("sizeof('n') = %zu\n", sizeof('n'));
	/*
	char 是一种数据类型，而 'n' 是一个字面量常量，
	它们在 C 语言标准中被定义为完全不同的东西。
	
	*/

	
	printf("sizeof(short) = %zu\n", sizeof(short));
	printf("sizeof(int) = %zu\n", sizeof(int));
	
	
	printf("sizeof(3999) = %zu\n", sizeof(3999));


	printf("sizeof(long) = %zu\n", sizeof(long));
	// C语言规定sizeof（long）>= sizeof(int) ,有时候是 4，有时候是8，取决于编译器和平台

	printf("sizeof(long long) = %zu\n", sizeof(long long));
	printf("sizeof(float) = %zu\n", sizeof(float));
	printf("sizeof(double) = %zu\n", sizeof(double));
	printf("sizeof(long double) = %zu\n", sizeof(long double));


	short s = 12;
	int a = 10;
	printf("%zu\n", sizeof(s = a + 1));
	printf("%d\n", s); // 12，sizeof是一个编译时运算符，它不会对表达式求值，只是计算类型大小

	return 0;
}