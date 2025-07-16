#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int decimal = 4294967295;
	unsigned int binary = 11111111111111111111111111111111;
	unsigned int oct = 037777777777;
	unsigned int hex = 0xffffffff;

	printf("%u", decimal);
	printf("%u", binary);
	printf("%u", oct);
	printf("%u", hex);

	return 0;
}