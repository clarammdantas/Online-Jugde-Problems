//Fuga do cavalo

#include <bits/stdc++.h>

using namespace std;

map<char, int> alphaToNum;

void makeMap() {
	alphaToNum['a'] = 1;
	alphaToNum['b'] = 2;
	alphaToNum['c'] = 3;
	alphaToNum['d'] = 4;
	alphaToNum['e'] = 5;
	alphaToNum['f'] = 6;
	alphaToNum['g'] = 7;
	alphaToNum['h'] = 8;
}

int main() {
	makeMap();
	int testCase = 0;

	while (true) {
		testCase++;

		string hMove;
		cin >> hMove;

		if (hMove == "0") break;

		pair<int, int> hMovep = make_pair((hMove[0] - '0'), (alphaToNum[hMove[1]]));

		pair<int, int> positions[8];

		for (int i = 0; i < 8; i++)
			positions[i] = make_pair('-',0);

		for (int i = 0; i < 8; i++) {
			string p;
			cin >> p;

			pair<int, int> ps = make_pair((p[0]-'0'),(alphaToNum[p[1]]));
			positions[i] = ps;
		}

		int ans = 0;
		vector<pair<int, int> > allHPositions;
		for (int i = 2; i > 0; i--) {
			if (i == 2) {
				if (hMovep.first + i < 9 && hMovep.second - 1 > 0) {
					allHPositions.push_back(make_pair((hMovep.first + i),(hMovep.second - 1)));
				}

				if (hMovep.first - i > 0 && hMovep.second - 1 > 0) {
					allHPositions.push_back(make_pair((hMovep.first - i),(hMovep.second - 1)));
				}

				if (hMovep.first + i < 9 && hMovep.second + 1 < 9) {
					allHPositions.push_back(make_pair((hMovep.first + i),(hMovep.second + 1)));
				}

				if (hMovep.first - i > 0 && hMovep.second + 1 < 9) {
					allHPositions.push_back(make_pair((hMovep.first - i),(hMovep.second + 1)));
				}

			} else {
				if (hMovep.first + i < 9 && hMovep.second + 2 < 9) {
					allHPositions.push_back(make_pair((hMovep.first + i),(hMovep.second + 2)));
				}

				if (hMovep.first - i > 0 && hMovep.second + 2 < 9) {
					allHPositions.push_back(make_pair((hMovep.first - i),(hMovep.second + 2)));
				}

				if (hMovep.first + i < 9 && hMovep.second - 2 > 0) {
					allHPositions.push_back(make_pair((hMovep.first + i),(hMovep.second - 2)));
				}

				if (hMovep.first - i > 0 && hMovep.second - 2 > 0) {
					allHPositions.push_back(make_pair((hMovep.first - i),(hMovep.second - 2)));
				}
			}
		}

		vector<pair<int, int> > marked;
		for (int i = 0; i < allHPositions.size(); i++) {
			bool contains = false;
			pair<int, int> actualPosition = allHPositions.at(i);

			//cout << actualPosition.first << " " << actualPosition.second << endl;

			for (int j = 0; j < 8; j++) {
				if (actualPosition.first == positions[j].first - 1 && actualPosition.second == positions[j].second + 1) {
					contains = true; break;
				}

				if (actualPosition.first == positions[j].first - 1 && actualPosition.second == positions[j].second - 1) {
					contains = true; break;
				}
			}

			bool isThere = false;
			for (int i = 0; i < marked.size(); i++) {
				if (marked.at(i).first == actualPosition.first && marked.at(i).second == actualPosition.second) {
					isThere = true;
					break;
				}
			}

			if (!contains && !isThere) {ans++; marked.push_back(actualPosition);}
		}

		//cout << marked.size() << endl;
		//for (int i = 0; i < marked.size(); i++)
		//	cout << marked.at(i).first << " " << marked.at(i).second << endl;

		cout << "Caso de Teste #" << testCase << ": " << ans << " movimento(s)." << endl;

	}

	return 0;
}
