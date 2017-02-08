// Contest - Codeforces 285 Div 2 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int max(int x, int y) {
	if (x >= y) return x;

	return y;
}

int calculatePoints(int p, int t) {
	return max(3 * p / 10, p - p / 250 * t);
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int misha = calculatePoints(a, c);
	int vasya = calculatePoints(b, d);

	if (misha > vasya)
		cout << "Misha" << endl;

	else if (vasya > misha)
		cout << "Vasya" << endl;

	else
		cout << "Tie" << endl;

	return 0;
}
