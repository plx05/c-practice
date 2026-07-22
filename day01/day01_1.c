#include <stdio.h>
int main(void) {
	printf("Hello, World!\n");     // 字符串
	printf("%s\n", "Hello, World!");     // 字符串
	printf("%s\n", "H");     // 字符串可以是一个字符


	printf("1+1 = %d\n", 1 + 1);   // 整数
	printf("2*3.0 = %f\n", 2 * 3.0);   // 浮点数
	printf("%c\n", 'X');                // 字符
	printf("%c", 88);                // 字符 ASCII码的体现

	//int i = 0;
	//for ( i = 33; i < 100; i++)
	//{
	//	printf("%c", i);

	//}

	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };

	printf("%c\n", arr1[3]);



	/*
	
	转义字符
	
	*/
	printf("(???)\n");  //  \? --> ?

	printf("%c\n", '\''); //  \' --> '

	printf("%c\n", '\"'); //  \" --> "

	printf("%c\n", '\\'); //  \\ --> \   \失去了转义的意义，他就是一个普通的\

	// \b 退格键
	printf("abcdef\b\b\b\n"); //  abcdef

	// \t 制表符 一般用来对齐,通常是下一个4/8的倍数
	printf("abc\tde\tf\n");
	


	return 0;
}