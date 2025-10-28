#include <iostream>

void solve() {
	int n,pi=0,ci=1,r=0;
	char s[51];

	std::cin>>n;
	std::cin>>s;

	while (s[ci]!='\0'){
		if (s[pi]!=s[ci]){
			pi++;
			ci++;
		}else{
			r++;
			ci++;
		}
	}
}

int main() {
	solve();
}
