#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, maxRepetition;
	scanf("%d\n", &n);

	if (n % 2 == 0) maxRepetition = n / 2;
	else maxRepetition = n / 2 + 1;

	map<int, int> freq;
	bool possible = true;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);

		if (freq.find(x) != freq.end()) {
			if (++freq[x] > maxRepetition) {possible = false; break;}
		} else {
			freq[x] = 1;
		}
	}

	if (possible) printf("%s\n", "YES");
	else printf("%s\n", "NO");

	return 0;
}