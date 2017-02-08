// Andando no Tempo - URI 2235
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b || b == c || c == a) cout << "S" << endl;
	else if ((a + b) == c || (b + c) == a || (c + a) == b) cout << "S" << endl;
	else cout << "N" << endl;

	return 0;
}