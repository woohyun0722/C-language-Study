#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int won = 0;

	printf("Input won\n");
	scanf("%d", &won);

	printf("%f dollar", won * 0.00073f);

	return 0;
}