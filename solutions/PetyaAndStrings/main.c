#include <stdio.h>

char lower(char c) {
	if ('A' <= c && c <= 'Z') return c+32;
	return c;
}

int main() {
	char s1[110];
	char s2[110];

	if (fgets(s1, sizeof(s1), stdin) == NULL) {
		return 1;
	};
	if (fgets(s2, sizeof(s2), stdin) == NULL) {
		return 1;
	}

	for (int i = 0; i < 109; i++) {
		char c1 = lower(s1[i]);
		char c2 = lower(s2[i]);
		
		if (c1 < c2) {
			fprintf(stdout, "-1\n");
	return 0;
		} else if (c1 > c2) {
			fprintf(stdout, "1\n");
	return 0;
		}

		if (c1 == '\n' || c1 == '\0') {
			break;
		}
	}
	fprintf(stdout, "0\n");

	return 0;
}
