#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	bool inter = false;
	int xs[n];
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);

		xs[i] = x;
	}

	for (int i = 0; i < n - 1; i++) {
		int a, b;
		if (xs[i + 1] <= xs[i]) {
			a = xs[i + 1]; b = xs[i];
		} else {
			a = xs[i]; b = xs[i + 1];
		}

		for (int j = i + 1; j < n - 1; j++){
			int c, d;
			if (xs[j] >= xs[j + 1]) {
				c = xs[j + 1]; d = xs[j];
			} else {
				c = xs[j]; d = xs[j + 1];
			}

			if ((a < c  && c < b && b < d) || (c < a && a < d  && d < b)) {
				inter = true; break;}
		}

		if (inter) break;
	}

	if (inter) cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}
