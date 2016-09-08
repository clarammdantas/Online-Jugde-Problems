//codeforces - 476A

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int minimum_moves = (n + 1) / 2;
	int ans = (minimum_moves + m - 1) / m * m;

	if(ans > n)
		ans = -1;

	cout << ans << endl;

	return 0;
}