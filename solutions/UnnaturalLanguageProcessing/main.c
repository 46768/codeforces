// CVCV CCVC
// CVCV -> CV ...
// CVCC VC
// CVCC -> CVC ...
// CVC
// CVC -> CVC
//
// CVCV
// CVCV -> CV ..
// CV
// CV -> CV
//
// CVC
// CVC -> CVC
//
// CVCCVC
// CVCC -> CVC ...
// CVC
// CVC -> CVC
//
// CVCVCCVCVCVCCVCCVCVCCV
// CVCV -> CV ...
// CVCCVCVCVCCVCCVCVCCV
// CVCC -> CVC ...
// CVCVCVCCVCCVCVCCV
// CVCV -> CV ..
// CVCVCCVCCVCVCCV
// CVCV -> CV ..
// CVCCVCCVCVCCV
// CVCC -> CVC ...
// CVCCVCVCCV
// CVCC -> CVC ...
// CVCVCCV
// CVCV -> CV ...
// CVCCV
// CVCC -> CVC ...
// CV -> CV

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		char s[4];
		scanf("%d",&n);
		if(n<=3){
			scanf("%c",s);
			for(int i=0;i<n;i++){
				scanf("%c",s);
				fprintf(stdout,"%c",s[0]);
			}
			fprintf(stdout,"\n");
			continue;
		}
		scanf("\n%c%c%c%c",s,s+1,s+2,s+3);
		for(int i=3;i<n;){
			int ic=2;
			//fprintf(stderr,"%c %c %c %c\n",s[0],s[1],s[2],s[3]);
			if(s[3]=='a'||s[3]=='e'){
				fprintf(stdout,"%c%c.",s[0],s[1]);
			}else{
				fprintf(stdout,"%c%c%c.",s[0],s[1],s[2]);
				ic=3;
			}
			for(int j=0;j<ic;j++){
				s[0]=s[1];
				s[1]=s[2];
				s[2]=s[3];
				if(i+j+1>=n){
					s[3]='0';
				}else{
					scanf("%c",s+3);
				}
			}
			i+=ic;
		}
		if(s[2]=='0'){
			fprintf(stdout,"%c%c\n",s[0],s[1]);
		}else{
			fprintf(stdout,"%c%c%c\n",s[0],s[1],s[2]);
		}
	}
	return 0;
}
