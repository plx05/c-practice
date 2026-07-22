#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int a, int b) {

	int c = a + b;

	return c;
}

int main() {

	printf("%d\n", Add(3, 7));

	return 0;
}