// As abas de Péricles - URI 2061

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		string x;
		cin >> x;

		if (x == "fechou") n += 1;
		else n -= 1;
	}

	cout << n << endl;

	return 0;
}