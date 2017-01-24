// codeforces div2 - problem 678C

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll max(ll x, ll y) {
	if(x > y) return x;
	else return y;
}

ll min(ll x, ll y) {
	if(x > y) return y;
	else return x;
}

ll gdc(ll a, ll b) {
	if(abs(a - b) == 1) return 1;
	if(a == b) return a;
	if(b == 1) return 1;
	ll r;
	while(b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ll n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;
	
	ll g = (a * b) / gdc(max(a, b), min(a, b));
	
	ll ans = p * (n / a) + q * (n / b) - min(p, q) * (n / g);
	
	cout << ans << endl;

	return 0;
}
