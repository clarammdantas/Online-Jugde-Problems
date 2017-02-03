// Fox and Number Game - Codeforces div2 A - 228
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

int getMin(int n) {

	int min = 110;

	for (int i = 0; i < n; i++) {
		if (nums[i] < min)
			min = nums[i];
	}

	return min;
}

bool areEqual(int n) {

	for (int i = 0; i < n - 1; i++) {
		if (nums[i] != nums[i + 1])
			return false;
	}

	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		nums.push_back(x);
	}

	while (!areEqual(n)) {
		int min = getMin(n);

		for (int i = 0; i < n; i++) {
			if (nums[i] != min)
				nums[i] -= min;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += nums[i];
	}

	cout << ans << endl;

	return 0;
}
