#include <bits/stdc++.h>

using namespace std;

int main() {
	string a[4];

	for (int i = 0; i < 4; i++) {
		string x;
		cin >> x;

		a[i] = x;
	}

	int lens[4];

	for (int i = 0; i < 4; i++)
		lens[i] = a[i].length() - 2;

	sort(lens, lens + 4);

	bool hasMax = lens[3] >= lens[2]  * 2;
	bool hasMin = lens[0] <= lens[1] / 2;

	if (hasMin == hasMax) {
		cout << "C" << endl;
	} else if (hasMin) {
		for (int i = 0; i < 4; i++) {
			if (lens[0] + 2 == a[i].length())
				cout << a[i][0] << endl;
		}
	} else if (hasMax) {
		for (int i = 0; i < 4; i++) {
			if (lens[3] + 2 == a[i].length())
				cout << a[i][0] << endl;
		}
	}

	return 0;
}
