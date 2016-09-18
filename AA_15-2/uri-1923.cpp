// URI - Rerisson and Barbecue - 1923

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, g;
	cin >> n >> g;

	map<string, vector<string> > relations;

	for (int i = 0; i < n; i++) {
		string p1, p2;
		cin >> p1 >> p2;

		if (relations.find(p1) == relations.end() ) {
			relations[p1] = {p2};
		} else {
			relations[p1].push_back(p2);
		}

		if (relations.find(p2) == relations.end() ) {
			relations[p2] = {p1};
		} else {
			relations[p2].push_back(p1);
		}

	}

	int level = 1;
	vector<string> frontier;
	frontier.push_back("Rerisson");
	vector<string> ans;

	while (level <= g) {
		vector<string> next;
		for (int i = 0; i < frontier.size(); i++) {
			string u = frontier.at(i);

			for (int j = 0; j < u.size(); j++) {
				if 
			}
		}
	}

	return 0;
}