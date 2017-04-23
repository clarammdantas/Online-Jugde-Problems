#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	int k, d;
	scanf("%d %d", &k, &d);

	stringstream convert;
	string result;
	string out = "";

	if (k > 1 && d == 0)
		cout << "No solution" << endl;

	else if (d % k == 0) {
		int alg = d / k;
		convert << alg;
		result = convert.str();

		for (int i = 0; i < k; i++)
			out += result;

	}

	else if (k > d) {
		int alg = d;
		convert << alg;
		result = convert.str();

		out += result;
		for (int i = 0; i < k - 1; i++)
			out += "0";
	}

	else {
		int alg = d / k + 1;
		convert << alg;
		result = convert.str();

		for (int i = 0; i < k - 1; i++)
			out += result;

		out += '0';
	}

	cout << out << endl;

	return 0;
}