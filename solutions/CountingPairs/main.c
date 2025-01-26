#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){
	return(*(long long*)a - *(long long*)b);
}

int main() {
	int t;
	if(scanf("%d",&t)!=1)return 1;
	long long a[200000];
	int n;
	long long x,y,s;
	for(int i=0;i<t;i++){
		s=0;
		if(scanf("%d %lld %lld",&n,&x,&y)!=3)return 1;
		for(int j=0;j<n;j++){
			if(scanf("%lld",a+j)!=1)return 1;
			s+=a[j];
		}
		qsort(a,n,sizeof(long long),cmp);
		int jx=0,jy=0;
		long long ax=0,ay=0;
		for(int k=n-1;k>=0;k--){
			while((jx<n)&&(s-a[k]-a[jx]>=x))jx++;
			ax+=n-jx;
			while((jy<n)&&(s-a[k]-a[jy]>=y+1))jy++;
			ay+=n-jy;
		}
		for(int k=0;k<n;k++){
			if(s-a[k]-a[k]<x)ax--;
			if(s-a[k]-a[k]<y+1)ay--;
		}

		fprintf(stdout, "%lld\n",(ay>>1)-(ax>>1));
	}
	return 0;
}
