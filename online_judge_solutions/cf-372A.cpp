//Codeforces - 372# div 2 A

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, c;
	cin >> n >> c;

	vector<int> secs;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		secs.push_back(x);
	}

	int words = 1;
	for (int i = 0; i < n - 1; i++) {
		if (secs.at(i+1) - secs.at(i) <= c)words += 1;
		else words = 1;
	}

	cout << words << endl;

	return 0;
}