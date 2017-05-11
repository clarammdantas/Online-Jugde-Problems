#include <bits/stdc++.h>

using namespace std;

int main() {
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2;
	cin >> c1 >> c2;
	cin >> d1 >> d2;

	int a1 = -1, a2, a3, a4;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (i != j) {
				for (int k = 1; k < 10; k++) {
					if (k != i && k != j) {
						for (int l = 1; l < 10; l++) {
							if (l != i && l != j && l!= k) {
								if (k + l == r2 && i + j == r1 && i + l == d1) {
									if (i + k == c1 && j + l == c2 && j + k == d2) {
										a1 = i; a2 = j; a3 = k; a4 = l;
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (a1 == -1)
		cout << -1 << endl;

	else {
		cout << a1 << " " << a2 << endl;
		cout << a3 << " " << a4 << endl;
	}

	return 0;
}