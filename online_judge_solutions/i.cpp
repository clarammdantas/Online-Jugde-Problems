#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	
	while (b != d && (b < 10000 || d < 10000)) {
		if (b > d) d += c;
		else b += a;
	}

	if (b == d) cout << b << endl;
	else cout << -1 << endl;

	return 0;
}
