//text analysis

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string word;
	cin >> word;

	bool inside = false;
	int biggestWord = 0, qtdInside = 0, nowLen = 0;
	for (int i = 0; i < n; i++) {
		if (word[i] == '(') {inside = true;
			if (nowLen > biggestWord) biggestWord = nowLen;
			nowLen = 0;
			continue;
		}
		else if (word[i] == ')') {inside = false; continue;}

		if (inside) {
			if ((word[i] != '_' && word[i - 1] == '_') || (word[i - 1] == '(' && word[i] != '_'))
				qtdInside++;
		} else {
			if (word[i] == '_') {
				if (nowLen > biggestWord) biggestWord = nowLen;
				nowLen = 0;
				continue;
			} else nowLen++;
		}

		if (nowLen > biggestWord) biggestWord = nowLen;
	}

	cout << biggestWord << " " << qtdInside << endl;

	return 0;
}
