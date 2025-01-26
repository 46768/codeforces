#include <stdio.h>

int main() {
	int n,m,a,b;
	if(scanf("%d %d %d %d",&n,&m,&a,&b)!=4)return 1;
	int mb=n/m;
	int rb=n%m;
	int o = (mb*b)+(rb*a);
	int uo = n*a;
	int oo = (rb?mb+1:mb)*b;
	fprintf(stdout,"%d\n",o<uo?o<oo?o:oo:uo<oo?uo:oo);
	return 0;
}
