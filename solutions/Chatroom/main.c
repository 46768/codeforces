#include <stdio.h>

int main() {
	char ts[6] = "hello";
	int tsi = 0;
	char s[101];
	if(fgets(s,sizeof(s),stdin)==NULL)return 1;
	for(int i=0;i<101;i++){
		if(s[i]==ts[tsi])tsi++;
		if(tsi>=5){
			fprintf(stdout,"YES");
			return 0;
		}
		if(s[i]=='\n'||s[i]=='\0')break;
	}
	fprintf(stdout,"NO");
	return 0;
}
