//SPOJ - COLISAO7

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	ll x3, y3, x4, y4;
	cin >> x3 >> y3 >> x4 >> y4;

	if (x2 < x3 || y2 < y3 || x4 < x1 || y4 < y3)
		cout << 0 << endl;

	else
		cout << 1 << endl;

	return 0;
}
