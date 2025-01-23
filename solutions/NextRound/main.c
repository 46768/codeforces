#include <stdio.h>

int main() {
	int n;
	int k;
	int p[50];
	int a = 0;
	if (scanf("%d %d", &n, &k) != 2) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", p+i) != 1) {
			return 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (p[i] >= p[k-1] && p[i]) {
			a++;
		}
	}

	fprintf(stdout, "%d\n", a);
}
