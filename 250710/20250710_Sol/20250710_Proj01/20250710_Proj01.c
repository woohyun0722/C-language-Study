#include <stdio.h>

void say_hello() {
	int x = 1;
	x = 10;
	printf("I Love C");
	return;
}

int main() {
	/*say_hello();*/

	int x, y, z;
	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();

	return 0;
}		