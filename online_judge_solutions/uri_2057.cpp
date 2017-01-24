// Fuso Horario - URI 2057

#include <bits/stdc++.h>

using namespace std;

int main() {
	int s, tv, f;
	cin >> s >> tv >> f;

	if (s == 0) s = 24;

	cout << (s + tv + f) % 24 << endl;

	return 0;
}