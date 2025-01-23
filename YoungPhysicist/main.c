#include <stdio.h>

int main() {
	int c;
	int x,y,z;
	int xf=0;
	int yf=0;
	int zf=0;
	if (scanf("%d",&c)!=1)return 1;
	for (int i = 0; i < c; i++){
		if(scanf("%d %d %d",&x,&y,&z)==3){
			xf+=x;
			yf+=y;
			zf+=z;
		}
	}
	if(xf==0&&yf==0&&zf==0){
		fprintf(stdout,"YES");
	}else{
		fprintf(stdout,"NO");
	}
	return 0;
}
