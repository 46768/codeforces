#include <iostream>

void solve() {
	char s[101] = {0};
	int n[3] = {0, 0, 0};
	int si=0,l = 0, ni=0;

	std::cin >> s;

	char b = s[0];
	while (b != '\0') {
		if (b != '+') {
			n[b-'0'-1]++;
		}

		l++;
		b = s[l];
	}

	while (si<l) {
		if ((si&1) == 0) {
			if (n[ni] == 0) {
				ni++;
				continue;
			};
			std::cout << (ni+1);
			n[ni]--;
			if (n[ni] == 0) {
				ni++;
			}
		} else {
			std::cout << '+';
		}

		si++;
	}
	
	std::cout << '\n';
}

int main() {
	solve();
}
