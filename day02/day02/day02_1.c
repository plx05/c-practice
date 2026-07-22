#include <stdio.h>
#include <string.h>
int main() {

	// 利用转义字符输出字符'X'
	printf("%c\n", '\130');  // 八进制表示法，\130是八进制数，等于十进制的88
	printf("%c\n", '\x58');  // 十六进制表示法，\x58是十六进制数，等于十进制的88

	printf("%c\n",88);
	
	printf("%c\n",'X'+32);

	// \0 表示null字符，什一般是字符串的结束标志

	printf("%d\n",71);
	printf("%d\n", 071);  // 八进制表示法，071是八进制数，等于十进制的57

	// 字符串长度 string length
	int len = strlen("abc\16");  // strlen()函数用于计算字符串的长度，不包括字符串结束符'\0' , \16是一个转义字符，表示ASCII码为14的字符
	printf("字符串 \"abc\" 的长度%zu\n",len);

	return 0;
}