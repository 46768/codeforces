#include <stdio.h>

int main() {
	int m;
	int n;
	if (scanf("%d %d", &m, &n) != 2) {
		return 1;
	}
	fprintf(stdout, "%d\n", (m*n)/2);
}
