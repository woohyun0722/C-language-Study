#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main() {
	char c = "A";
	char d = 65;
	char e = "*";

	printf("%c, %hhd\n", c, c);
	printf("%c, %hhd\n", d,d);
	printf("%c, %hhd\n", e,e);

	printf("\07");

	return 0;
}