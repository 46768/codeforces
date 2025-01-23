#include <stdio.h>

int main() {
	int summands[3];
	int sumidx;

	for (int i = 0; i < 100; i++) {
		if (scanf("%d+", &sumidx) == 1) {
			summands[sumidx]++;
		}
	}

	for (int i = 0; i < summands[0]; i++) {
		fprintf(stdout, "1+");
	}
	for (int i = 0; i < summands[1]; i++) {
		fprintf(stdout, "2+");
	}
	for (int i = 0; i < summands[2]; i++) {
		fprintf(stdout, "3+");
	}
}
