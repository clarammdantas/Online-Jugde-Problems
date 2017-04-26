#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int negs = 0, posi = 0;
	int a[n];
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		a[i] = x;

		if (x == -1) negs++;
		else posi++;
	}

	for (int i = 0; i < m; i++) {
		int l, r;
		scanf("%d %d", &l, &r);

		if ((r - l + 1) % 2 != 0){ cout << 0 << endl;}
		else {
			if (posi >= (r - l + 1) / 2 && negs >= (r - l + 1) / 2) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}

	return 0;
}
