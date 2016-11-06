// Saltos - URI 2311

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> athlets;
	vector<double> results;

	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		athlets.push_back(name);

		vector<double> partial;
		double dif;
		cin >> dif;

		double min= 11.0;
		double max = -1.0;
		double total = 0;
		for (int i = 0; i < 7; i++) {
			double g;
			cin >> g;
			total += g;

			partial.push_back(g);
			if (g > max) max = g;
			if (g < min) min = g;
		}

		for (int i = 0; i < 7; i++) {
			if (partial.at(i) == max || partial.at(i) == min) total -= partial.at(i);
		}

		results.push_back((total * dif));
	}

	for (int i = 0; i < n; i++) {
		cout << athlets.at(i) << " ";
		printf("%.2f\n", results.at(i));
	}

	return 0;
}