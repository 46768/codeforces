#include <stdio.h>

int main() {
	int pCount;
	char c1;
	char c2;
	char c3;
	int x = 0;
	if (scanf("%d\n", &pCount) != 1) {
		return 1;
	}

	for (int i = 0; i < pCount; i++) {
		if (scanf("%c%c%c\n", &c1, &c2, &c3)) {
			if (c2 == '-') {
				x--;
			} else {
				x++;
			}
		}
	}
	fprintf(stdout, "%d\n", x);
}
