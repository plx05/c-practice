#include <stdio.h>
#include <stdbool.h> // 引入布尔类型头文件
int main() {


	; // 这是一个空语句，什么也不做


	// 字符类型
	char c = 'A'; // 定义一个字符变量 c，并初始化为 'A'
	
	// 整数类型
	int i = 10; // 定义一个整数变量 i，并初始化为 10
	short s = 20; // 定义一个短整数变量 s，并初始化为 20
	long f = 30; // 定义一个长整数变量 l，并初始化为 30
	long long k = 40; // 定义一个长长整数变量 ll，并初始化为 40

	// 浮点类型
	float f1 = 3.14f; // 定义一个浮点变量 f，并初始化为 3.14
	double d = 3.14159265; // 定义一个双精度浮点变量 d，并初始化为 3.141592653589793
	long double ld = 3.14159265358979323846L; // 定义一个长双精度浮点变量 ld，并初始化为 3.14159265358979323846

	// 布尔类型
	bool b = true; // 定义一个布尔变量 b，并初始化为 true (1)
	bool b2 = false; // 定义一个布尔变量 b2，并初始化为 false (0)

	_Bool b3 = true; // 定义一个 _Bool 类型变量
	if (b3) {
		printf("b3 is true\n");

	}

	return 0;
}