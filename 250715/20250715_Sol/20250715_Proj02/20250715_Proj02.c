#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {

	unsigned int i = 0b1111111111;
	unsigned int u = UINT_MAX;
	signed int i_max = INT_MAX;

	char buffer[33];
	_itoa(u, buffer, 2);

	//printf("%u", sizeof(u));
	//printf("%u", u);
	printf("decimal: %u\n", u);
	printf("binary: %s\n", buffer);

	return 0;
}