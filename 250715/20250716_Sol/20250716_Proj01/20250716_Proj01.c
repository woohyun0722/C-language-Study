#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;
	long l = 65537L;
	long long ll = 12345678908642LL;
	
	printf("%hhd, %d, %c", c, c, c);
	printf("%hhd, %hd, %d", s, s, s);
	printf("%u, %d, ", ui, ui);
	printf("%ld, %hd", l, l);
	printf("%lld, %ld", ll, ll);

	return 0;
}