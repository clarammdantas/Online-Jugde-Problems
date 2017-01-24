// Codeforces - div2 - 25A
// IQ Test

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> nums;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;

		nums.push_back(k);
	}

	int even = 0;
	int odd = 0;

	for (int i = 0; i < 3; i++) {
		if (nums.at(i) % 2 == 0) even += 1;
		else odd += 1;
	}

	if (even >= 2) {
		for (int i = 0; i < n; i++) {
			if (nums.at(i) % 2 != 0) {
				cout << i + 1 << endl; 
				break;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (nums.at(i) % 2 == 0) {
				cout << i + 1 << endl;
				break;
			}
		}
	}

	return 0;
}