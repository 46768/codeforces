#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a, const void*b){
	return(*(int*)a - *(int*)b);
}

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n,e=1;
		scanf("%d",&n);
		int a[n],b[n];
		for(int j=0;j<n;j++){
			scanf("%d",a+j);
		}
		for(int j=0;j<n;j++){
			scanf("%d",b+j);
		}
		long long s=0;
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		for(int j=0;j<n;j++){
			e=a[j]==b[j]?e:0;
			s+=a[j]-b[j];
		}
		if(s>0||e){
			fprintf(stdout,"YES\n");
		}else{
			fprintf(stdout,"NO\n");
		}
	}
	return 0;
}
