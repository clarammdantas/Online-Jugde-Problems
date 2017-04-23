#include <bits/stdc++.h>

using namespace std;

int main() {
	string n;
	cin >> n;

	for (int i = n.length() - 1; i > -1; i--) {
		char c = n[i];
		int k = c - '0';

		if (k >= 5) {
			cout << "-O|";
			for (int j = 0; j < k - 5; j++) {
				cout << "O";
			}

			for (int j = 0; j < 10 - k ; j++) {
				if (j == 0 && j != 9 - k) cout << "-";
				else if (j == 0 && j == 9 - k) cout << "-" << endl;
				else if (j == 9 - k) cout << "O" << endl;
				else cout << "O"; 
			}
		} else {
			cout << "O-|";
			for (int j = 0; j < k; j++) {
				cout << "O";
			}

			for (int j = k; j < 5; j++) {
				if (j == k && j != 4) cout << "-";
				else if (j == k && j == 4) cout << "-" << endl;
				else if (j > k && j == 4) cout << "O" << endl;
				else if (j > k && j < 4) cout << "O";
			}
		}
	}

	return 0;
}