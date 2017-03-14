// DZY Loves Chessboard - Codeforces div 2A - 445
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	char board[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			board[i][j] = c;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == '.' && j < m - 1) {
				if ((i + j) % 2 == 0)
					cout << 'B';

				else
					cout << 'W';

			} else if (board[i][j] == '.' && j == m - 1) {
				if ((i + j) % 2 == 0)
					cout << 'B' << endl;

				else
					cout << 'W' << endl;

			} else {
				if (j < m - 1)
					cout << '-';

				else
					cout << '-' << endl;

			}
		}
	}

	return 0;
}