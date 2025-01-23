#include <stdio.h>

int main() {
	long long n;
	long long m;
	long long a;
	if (scanf("%lld %lld %lld", &n, &m, &a) != 3) {
		return 1;
	}

	n += n%a ? a - (n % a) : 0;
	m += m%a ? a - (m % a) : 0;
	fprintf(stdout, "%lld\n", (n*m)/(a*a));
	return 0;
}
