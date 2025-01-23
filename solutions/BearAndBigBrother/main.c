#include <stdio.h>

int main() {
	int a;
	int b;
	int c = 0;
	if (scanf("%d %d", &a, &b) != 2) return 1;
	while (a <= b) {
		c++;
		a *= 3;
		b *= 2;
	}
	fprintf(stdout, "%d\n", c);
}
