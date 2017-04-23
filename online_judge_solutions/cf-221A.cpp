#include <bits/stdc++.h>

using namespace std;

int main() {
	string lever;
	cin >> lever;

	int pivot = -1;
	for (int i = 0; i < lever.length(); i++) {
		if (lever.at(i) == '^') {pivot = i; break;}
	}

	long long int left = 0;
	for (int i = 0; i < pivot; i++) {
		if (lever.at(i) != '^' && lever.at(i) != '=') {
			int n = lever.at(i) - '0';
			left += n * (pivot - i);
		}
	}

	long long int right = 0;
	for (int i = pivot + 1; i < lever.length(); i++) {
		if (lever.at(i) != '^' && lever.at(i) != '=') {
			int n = lever.at(i) - '0';
			right += n * (i - pivot);
		}
	}

	if (left == right) cout << "balance" << endl;
	else if (left > right) cout << "left" << endl;
	else cout << "right" << endl;

	return 0;
}
