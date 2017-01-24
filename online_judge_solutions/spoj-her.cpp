// Homem, elefante e rato, Spoj
// Clara Moraes Dantas

#include <bits/stdc++.h>
#define MAX 100001;

using namespace std;

typedef long long int ll;

void update(ll i, int val, ll tree[]) {
	while (i < maxVal) {
		tree[i] += val;
		i += (i & -i);
	}
}

ll getSum(ll i, ll tree[]) {
	ll sum = 0;
	while (i > 0) {
		sum += tree[i];
		i -= (i & -i);
	}

	return sum;
}

int main() {
	ll muda = 0, n, m;

	while (scanf("%ld %ld", &n, &m)) {
		ll homem[n], elefante[n], rato[n];

	}

	return 0;
}