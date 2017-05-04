#include <bits/stdc++.h>
#define MAX 1000003

using namespace std;

int cycles[MAX];
void calculate_cycles() {
	cycles[1] = 1;

	for (int i = 2; i < MAX; i++) {
		int ans = 1, aux = i;

		while (aux > 1) {
			if (aux < i && cycles[aux] != 0) {
				ans += cycles[aux] - 1;
				break;
			} else if (aux % 2 != 0) {
				aux = 3 * aux + 1;
			} else {
				aux /= 2;
			}
			++ans;
		}

		cycles[i] = ans;
	}
}

int main() {
	calculate_cycles();

	int i, j;
	while (cin >> i >> j) {
		int m, c;
		if (i >= j) {m = j; c = i;}
		else {m = i; c = j;}

		int max = -1;
		for (int k = m; k < c + 1; k++) {
			if (cycles[k] > max) max = cycles[k];
		}

		cout << i << " " << j << " " << max << endl;
	}

	return 0;
}
