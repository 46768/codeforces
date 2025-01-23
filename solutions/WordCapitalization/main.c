#include <stdio.h>

int main() {
	char w[1001];
	if (fgets(w, sizeof(w), stdin) == NULL) {
		return 1;
	}
	if ('a' <= w[0] && w[0] <= 'z') {
		w[0] -= 32;
	}
	fprintf(stdout, "%s\n", w);
}
