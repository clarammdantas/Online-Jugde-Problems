// Codeforces - Div 2 A - # 379
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	string games;
	cin >> games;

	int danik = 0, anton = 0;
	for (int i = 0; i < n; i++) {
		if (games[i] == 'D') danik += 1;
		else anton += 1;
	}

	if (danik > anton) cout << "Danik" << endl;

	else if (anton > danik) cout << "Anton" << endl;

	else cout << "Friendship" << endl;

	return 0;
}
