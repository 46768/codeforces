#include <stdio.h>

int main() {
	char s[101];
	if (fgets(s, sizeof(s), stdin)==NULL)return 1;
	for (int i = 0; i < 100;i++) {
		if ('A' <= s[i] && s[i]<='Z')s[i]+=32;
		if ('a'==s[i]||'e'==s[i]||'i'==s[i]||'o'==s[i]||'u'==s[i])s[i]='.';
		if(i&1&&s[i]=='.'){
			s[i-1]=s[i-1]^s[i];
			s[i]=s[i-1]^s[i];
			s[i-1]=s[i-1]^s[i];
		}
	}
	fprintf(stdout, "%s\n", s);
}
