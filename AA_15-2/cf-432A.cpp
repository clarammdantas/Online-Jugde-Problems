// Codeforces - div 2 - 432A
// Chosing Teams

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int times = 5 - k;
	int peopleAble = 0;

	for (int i = 0; i < n; i ++) {
		int ti;
		cin >> ti;

		if (ti <= times) peopleAble += 1;
	}

	cout << peopleAble / 3 << endl;

	return 0;
}