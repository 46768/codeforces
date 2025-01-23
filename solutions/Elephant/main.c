#include <stdio.h>

int main() {
	int x;
	if (scanf("%d", &x) != 1) return 1;

	int s5 = x/5;
	int r5 = x % 5;
	if (r5) {
		fprintf(stdout, "%d\n", s5+1);
		return 0;
	}
	fprintf(stdout, "%d\n", s5);
	return 0;
}
