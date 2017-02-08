// SPOJ - PacMan 14

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> boardGame; 	

	for (int i = 0; i < n; i++) {
		string line;
		cin >> line;

		boardGame.push_back(line);
	}

	int food = 0;
	int maxFood = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (food > maxFood) maxFood = food;
				if (boardGame[i][j] == 'A') food = 0;
				else if (boardGame[i][j] == 'o') food += 1;
			}
		} else {
			for (int j = n - 1; j >= 0; j--) {
				if (food > maxFood) maxFood = food;
				if (boardGame[i][j] == 'A') food = 0;
				else if (boardGame[i][j] == 'o') food += 1;
			}
		}
	}

	if (food > maxFood) maxFood = food;

	cout << maxFood << endl;

	return 0;
}