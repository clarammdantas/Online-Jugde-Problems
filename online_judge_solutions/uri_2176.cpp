//Paridade

#include <bits/stdc++.h>

using namespace std;

int main() {
	int nOnes = 0;
	string info;

	cin >> info;

	for (int i = 0; i < info.length(); i++) {
		if (info[i] == '1') nOnes += 1;
	}

	if (nOnes % 2 == 0) {
		info += '0';
		cout << info << endl;
	}

	else {
		info += '1';
		cout << info << endl;
	}

	return 0;
}