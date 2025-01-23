#include <stdio.h>

int main() {
	int pCount;
	int petya;
	int vasya;
	int tonya;
	int pSolve = 0;
	if (scanf("%d\n", &pCount) != 1) {
		return 1;
	}

	for (int i = 0; i < pCount; i++) {
		if (scanf("%d %d %d\n", &petya, &vasya, &tonya) != 3) {
			if (petya+vasya+tonya >= 2) {
				pSolve++;
			}
		}
	}
	fprintf(stdout, "%d\n", pSolve);
}
