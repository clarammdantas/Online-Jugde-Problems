//Codeforces - 363 B - Fence

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
	vector<int> heights;
	int nFances, minimum;

	for (int i = 0; i < nFances; i++) {
		int x;
		cin >> x;

		heights.push_back(x);
	}

	ll min = 0;
	for (int i = 0; i < minimum; i++) {
		min += heights.at(i);
	}

	ll temp = 0;
	ll index = 0;
	for (int i = 0; i < heights.size(); i += minimum) {
		if ((i + 1) % minimum == 0) {
			if (temp < min)
				min = temp; index = i - minimum;

			temp = heights.at(i);
		}

		else
			temp += heights.at(i);
	}

	cout << index << endl;

	return 0;
}