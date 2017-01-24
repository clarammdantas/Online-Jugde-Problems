// Galopeira - URI 2147
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int c;
	cin >> c;

	for (int i = 0; i < c; i++) {
		string g;
		cin >> g;

		double total = 0.01 * g.length();
		printf("%.2f\n", total);
	}

	return 0;
}