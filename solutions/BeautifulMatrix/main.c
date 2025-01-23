#include <stdio.h>

int abs(int x) {
	if (x < 0) return -x;
	return x;
}

int main() {
	int r[5];
	for (int i = 0; i < 5; i++) {
		if (scanf("%d %d %d %d %d", r, r+1, r+2, r+3, r+4) == 5) {
			for (int j = 0; j < 5; j++) {
				if (r[j] == 1) {
					fprintf(stdout, "%d\n", abs(2-j)+abs(2-i));
				}
			}
		} else {
			return 1;
		}
	}
}
