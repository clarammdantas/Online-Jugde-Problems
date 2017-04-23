#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int cashiers[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		cashiers[i] = x;
	}

	int timeCashier[n];
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < cashiers[i]; j++) {
			int t;
			cin >> t;

			sum += t; 
		}
		
		timeCashier[i] = sum * 5 + 15 * cashiers[i];
	}

	int ans = timeCashier[0];
	for (int i = 0; i < n; i++) {
		if (timeCashier[i] < ans) ans = timeCashier[i];
	}

	cout << ans << endl;

	return 0;
}
