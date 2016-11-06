// Batalha de Pomekons - URI 2221
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int bonus, aD, dD, lD, aG, dG, lG;
		cin >> bonus;
		cin >> aD >> dD >> lD;
		cin >> aG >> dG >> lG;

		double vD = (aD + dD) / 2.0;
		if (lD % 2 == 0) vD += bonus;

		double vG = (aG + dG) / 2.0;
		if (lG % 2 == 0) vG += bonus;

		if (vD > vG) cout << "Dabriel" << endl;
		else if (vG > vD) cout << "Guarte" << endl;
		else cout << "Empate" << endl;

	}

	return 0;
}