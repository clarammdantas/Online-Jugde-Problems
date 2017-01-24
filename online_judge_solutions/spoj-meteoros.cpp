//SPOJ - Meteoros

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	vector<int> v;

	while (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {
		int n, meteoro_x, meteoro_y, k = 0;

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> meteoro_x >> meteoro_y;

			if ((x1 <= meteoro_x && meteoro_x <= x2) && (y2 <= meteoro_y && meteoro_y <= y1))
				k += 1;
		}

		v.push_back(k);

		cin >> x1 >> y1 >> x2 >> y2;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << "Teste " << i + 1 << endl;
		cout << v.at(i) << endl;
		cout << "\n" << endl;
	}

	return 0;
}