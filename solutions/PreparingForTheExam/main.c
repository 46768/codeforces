#include <stdio.h>

int main() {
	int t,n,m,k,qp,q[300],a[300];
	if(scanf("%d",&t)!=1)return 1;
	for(int i=0;i<t;i++){
		if(scanf("%d %d %d",&n,&m,&k)!=3)return 1;
		for(int j=0;j<m;j++){
			if(scanf("%d",a+j)!=1)return 1;
		}
		for(int j=0;j<k;j++){
			if(scanf("%d",&qp)!=1)return 1;
			q[qp-1]=1;
		}
		for(int j=0;j<m;j++){
			if(q[a[j]-1]!=1){
				fprintf(stdout,"1");
			}else{
				fprintf(stdout,"0");
			}
		}
		fprintf(stdout,"\n");
	}
	return 0;
}
