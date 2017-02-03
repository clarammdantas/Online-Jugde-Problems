// Cifera - Codeforces div 2 - A - 86
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll cifera(ll k, ll n) {
	ll ans = 0;

	while (n % k == 0) {
		ans++;
		n /= k;
	}

	if (n != 1) return -1;

	return ans;
}

int main() {
	ll k, l;
	cin >> k >> l;

	ll ans = cifera(k, l);

	if (ans != -1) {
		cout << "YES" << endl;
		cout << ans - 1 << endl;
	} else {
		cout << "NO" << endl;
	}
}
