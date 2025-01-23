#include <stdio.h>

int main() {
	char u[101];
	int c[26] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	};
	if (fgets(u, sizeof(u), stdin) == NULL) {
		return 1;
	}

	int unique = 0;
	for (int i = 0; i < 100; i++) {
		if (c[u[i]-97] != 1) {
			c[u[i]-97] = 1;
			unique++;
		}
		if (u[i] == '\n' || u[i] == '\0') {
			break;
		}
	}

	if (unique & 1) {
		fprintf(stdout, "CHAT WITH HER!\n");
	} else {
		fprintf(stdout, "IGNORE HIM!\n");
	}
	return 0;
}
