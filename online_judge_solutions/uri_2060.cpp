// Desafio de Bino - URI - 2060
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int two = 0, three = 0, four = 0, five = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x % 2 == 0) two += 1;
		if (x % 3 == 0) three += 1;
		if (x % 4 == 0) four += 1;
		if (x % 5 == 0) five += 1;
	}

	cout << two << " Multiplo(s) de 2" << endl;
	cout << three << " Multiplo(s) de 3" << endl;
	cout << four << " Multiplo(s) de 4" << endl;
	cout << five << " Multiplo(s) de 5" << endl;

	return 0;
}