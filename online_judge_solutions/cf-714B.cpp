// Codeforces - 714 B

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> nums;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		nums.push_back(x);
	}

	sort(nums.begin(), nums.end());

	int difs = 1, compare = nums[0], middle = -1;

	for (int i = 0; i < n; i++) {
		if (nums[i] != compare) {
			difs += 1;
			compare = nums[i];
		}

		if (nums[i] != nums[0] && nums[i] != nums[n - 1]) middle = nums[i];
	}

	if (difs <= 2) cout << "YES" << endl;

	else if (difs == 3) {
		if (middle == (nums[0] + nums[n - 1]) / 2.0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	else cout << "NO" << endl;

	return 0;
}