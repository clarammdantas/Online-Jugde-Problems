//codeforces 490-A

#include <bits/stdc++.h>

using namespace std;

int min (int a, int b, int c) {
	if (a <= b && a <= c)
		return a;

	else if (b <= a && b <= c)
		return b;

	else
		return c;
}

int main() {
	int ones = 0, twos = 0, threes = 0, n;
	map<int, vector<int> > children_indexes;

	cin >> n;
	for (int i = 0; i < n; i ++) {
		int num;
		cin >> num;

		if (num == 2) {
			children_indexes[num].push_back(i + 1);
			twos += 1;
		}

		else if (num == 1) {
			children_indexes[num].push_back(i + 1);
			ones += 1;
		}

		else {
			children_indexes[num].push_back(i + 1);
			threes += 1;
		}
	}

	int smaller_team = min(ones, twos, threes);

	if (smaller_team == 0)
		cout << 0 << endl;

	else {
		cout << smaller_team << endl;

		for (int i = 0; i < smaller_team; i++) {
			cout << children_indexes[1][i] << " " << children_indexes[2][i] << " " << children_indexes[3][i] << endl;
		}
	}

	return 0;
}
