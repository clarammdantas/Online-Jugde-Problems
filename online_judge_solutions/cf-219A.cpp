#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	scanf("%d\n", &k);

	map<int, int> freq;
	bool possible = true;

	for (int i = 0; i < 4; i++) {
		string line;
		cin >> line;

		for (int j = 0; j < 4; j++) {
			if (line[j] == '.') continue;
			int index = (int) line[j];

			if (freq.find(index) == freq.end()) {
				freq[index] = 1;
			} else {
				++freq[index];
				if (freq[index] > 2 * k) {possible = false; break;}
			}

		}
	}

	if (possible) printf("%s\n", "YES");
	else printf("%s\n", "NO");

	return 0;
}