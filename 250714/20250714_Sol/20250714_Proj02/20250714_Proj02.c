#define _CRT_SECURE_NO_WARNINGS
// CRT = C Run Time
// MSVC Program -> Compiler -> 해킹 및 보안에 우려
// 자체 함수
#include <stdio.h>


int main() {
	/*int i = 0;

	scanf_s("%d", &i);

	printf("Value is %d\n", i);*/

	int i = 0, j = 0;

	printf("Input Two Integers\n");

	if (scanf("%d %d", &i, &j) != 2) {
		printf("Invalid Input\n");

		return 1;
	}

	int sum = i + j;

	printf("%d + %d = %d\n", i, j, sum);

	return 0;
}