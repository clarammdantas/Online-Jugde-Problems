#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int soldiers[n];
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		soldiers[i] = k;
	}		

	int min = 1008, x = 0, y = 0;
	for (int i = 0; i < n && n > 1; i++) {
		int aux1, aux2;
		if (i == 0) {
			aux1 = abs(soldiers[i] - soldiers[n - 1]);
			aux2 = abs(soldiers[i] - soldiers[1]);

			if (min > aux1) {min = aux1; x = i; y = n - 1;}
			if (min > aux2) {min = aux2; x = i; y = 1;}
		}

		else if (i == n - 1) {
			aux1 = abs(soldiers[i] - soldiers[i - 1]);

			if (min > aux1) {min = aux1; x = i - 1; y = i;}
		}

		else {
			aux1 = abs(soldiers[i] - soldiers[i - 1]);
			aux2 = abs(soldiers[i] - soldiers[i + 1]);

			if (min > aux1) {min = aux1; x = i - 1; y = i;}
			else if (min > aux2) {min = aux2; x = i; y = i + 1;}
		}
	}

	cout << x + 1 << " " << y + 1 << endl;
	return 0;
}
