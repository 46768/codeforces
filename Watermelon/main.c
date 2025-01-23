#include <stdio.h>

int main() {
	char prev;
	int cnt = 0;
	char num;
	while ((num = fgetc(stdin)) != EOF) {
		if (num == '\n') break;
		prev = num;
		cnt++;
	}
	if ('0' > prev || prev > '9') {
		fprintf(stderr, "Invalid num, got %c or %c\n", prev, num);
		return 1;
	}
	int lsd = prev-'0';
	fprintf(stdout, (lsd & 1) || (lsd == 2 && cnt == 1) ? "NO\n" : "YES\n");
	return 0;
}
