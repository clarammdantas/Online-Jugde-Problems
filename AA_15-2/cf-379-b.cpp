// Codeforces - Div 2 B - # 379
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll min(ll x, ll y, ll z) {
	if (x <= y && x <= z) return x;

	else if (y <= x && y <= z) return y;

	else return z;
}

int main() {
	ll k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;

	ll min256 = min(k2, k5, k6);
	k2 -= min256; k5 -= min256; k6 -= min256;

	ll min32 = min(k2, k3);

	cout << 256 * min256 + 32 * min32 << endl;


	return 0;
}
