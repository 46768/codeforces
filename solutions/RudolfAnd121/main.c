#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int c=0;c<t;c++){
		int i=1,v=0,n,a[3];
		scanf("%d",&n);
		scanf("%d %d %d",a,a+1,a+2);
		for(;i<n-1;){
			if(1<=a[0]&&(a[0]<<1)<=a[1]&&a[0]<=a[2]){
				a[1]-=(a[0]<<1);
				a[2]-=a[0];
				a[0]=0;
				continue;
			}
			if(!a[0]){
				i++;
				a[0]=a[1];
				a[1]=a[2];
				if (i>=n-1){
					if(!a[2]&&!a[1]&&!a[0]){
						v=1;
					}
					break;
				}
				scanf("%d",a+2);
				continue;
			}
			i++;
			break;
		}
		for(;i<n-1;i++){
			scanf("%d",a);
		}
		fprintf(stdout,(a[0]+a[1]+a[2]==0&&v)?"YES\n":"NO\n");
	}
	return 0;
}
