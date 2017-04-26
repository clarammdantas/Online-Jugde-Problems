#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int ans = 4;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			if ((j == 0 || j == m - 1) && x == 1) ans = 2;
			else if ((i == 0 || i == n - 1) && x == 1) ans = 2;
		}
	}

	cout << ans << endl;

	return 0;
}
