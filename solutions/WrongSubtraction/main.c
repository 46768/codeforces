#include <stdio.h>

int main() {
	int n;
	int k;
	if (scanf("%d %d", &n, &k) != 2)return 1;
	for (int i = 0; i < k; i++) {
		if (n%10==0) {
			n/=10;
		} else {
			n--;
		}
	}
	fprintf(stdout, "%d\n", n);
}
