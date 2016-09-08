//SPOJ - BIT

#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> values;
	vector<int> bits_values;

	bits_values.push_back(50);
	bits_values.push_back(10);
	bits_values.push_back(5);
	bits_values.push_back(1);

	int v;
	cin >> v;

	while (v != 0) {
	
		for (int i = 0; i < 4; i++) {
			int x = v / bits_values.at(i);
			v = v - x * bits_values.at(i);
			values.push_back(x);
		}

		cin >> v;

	}

	int testNumber = 0;
	for (int i = 0; i < values.size(); i += 4) {
		testNumber += 1;

		cout << "Teste " << testNumber << endl;
		cout << values.at(i) << " " << values.at(i + 1) << " " << values.at(i + 2) << " " << values.at(i + 3) << endl;
		cout << "\n" << endl;
	}

	return 0;
}
