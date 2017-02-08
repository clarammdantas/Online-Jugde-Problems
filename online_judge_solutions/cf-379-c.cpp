// Codeforces - Div 2 C - # 379
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll MAX = 2000000001;

int main() {
	ll n, m, k;
	cin >> n >> m >> k;

	ll x, s;
	cin >> x >> s;

	vector<ll> potion1;
	vector<ll> pricePotion1;

	for (ll i = 0; i < m; i++) {
		ll p;
		cin >> p;

		potion1.push_back(p);
	}

	ll minPrice = MAX; ll minIndex = -1;
	for (ll i = 0; i < m; i++) {
		ll price;
		cin >> price;

		pricePotion1.push_back(price);

		if (minPrice >= price) {
			minPrice = price;
			minIndex = i;
		}
	}


	vector<ll> potion2; vector<ll> pricePotion2;
	for (ll i = 0; i < k; i++) {
		ll p;
		cin >> p;

		potion2.push_back(p);
	}

	for (ll i = 0; i < k; i++) {
		ll price;
		cin >> price;

		pricePotion2.push_back(price);
	}

	return 0;
}