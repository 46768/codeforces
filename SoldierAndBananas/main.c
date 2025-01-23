#include <stdio.h>

int main() {
	int k;
	int n;
	int w;
	if (scanf("%d %d %d", &k, &n, &w) != 3) return 1;

	int r = ((1+w)*w/2)*k;
	fprintf(stdout, "%d\n", r-n < 0 ? 0 : r-n);
	return 0;
}
