#include <stdio.h>

int main() {
	char s[101];
	if (fgets(s, sizeof(s), stdin) == NULL) return 1;

	int l = 0;
	int u = 0;
	for (int i = 0; i < 100; i++) {
		if ('a' <= s[i] && s[i] <= 'z') l++;
		if ('A' <= s[i] && s[i] <= 'Z') u++;
		if (s[i] == '\n' || s[i] == '\0') break;
	}
	int o = u<=l ? 32 : -32;
	char L=u>l?'a':'A';
	char B=u>l?'z':'Z';
	for (int i = 0; i < 100; i++) {
		if (L<=s[i]&&s[i]<=B) s[i]+=o;
	}
	fprintf(stdout, "%s\n", s);
}
