#include <stdio.h>

int main() {
	char s[101];
	char s2[303];
	if (fgets(s, sizeof(s), stdin)==NULL)return 1;
	for (int i = 0; i < 100;i++) {
		if ('A' <= s[i] && s[i]<='Z')s[i]+=32;
		if ('y'==s[i]||'a'==s[i]||'e'==s[i]||'i'==s[i]||'o'==s[i]||'u'==s[i])s[i]='.';
	}
	int j=1;
	for (int i = 0; i < 302;i++) {
		if('a'<=s[i]&&s[i]<='z'){
			s2[j]=s[i];
			s2[j-1]='.';
			j+=2;
		}
		if (s[i]=='\n'||s[i]=='\0'){
			s2[j-1]='\0';
			break;
		}
	}
	fprintf(stdout, "%s\n", s2);
}
