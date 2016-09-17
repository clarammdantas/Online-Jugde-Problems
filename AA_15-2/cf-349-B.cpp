// Codeforces - Color the Fence - round 202 div 2 B

#include <bits/stdc++.h>

using namespace std;
const long int MAX = 100001;

int main() {
	long int v;
	cin >> v;

	vector<long int> ad;
	long int menor = MAX;
	long int menorIndex = -1;
	for (int i = 0; i < 9; i++) {
		long int x;
		cin >> x;

		ad.push_back(x);

		if (menor > x) menor = x;
	}

	if (menor > v) cout << -1 << endl;

	else {
		string loveNumber = '';
		long int qtd = v / menor;

		for (long int i = 0; i < qtd; i++) {
			loveNumber += (string) ad.at(i);
		}

		cout << loveNumber << endl;
	}

	return 0;
}