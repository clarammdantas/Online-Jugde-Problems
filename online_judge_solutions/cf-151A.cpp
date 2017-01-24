// Soft Drink  - Codeforces 151 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int min(int a, int b, int c) {
	if (a <= b && a <= c) return a;
	else if (b <= a && b <= c) return b;
	return c;
}

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	cout << (min((k * l) / nl, c * d, p / np)) / n << endl;
	
	return 0;
}
