// Parallelepiped - Codeforces - div 2 A - 138
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
	ll s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	ll a = sqrt(s1 * s3 / s2), b = sqrt(s2 * s1 / s3), c = sqrt(s3 * s2 / s1);

	cout << 4 * (a + b + c) << endl;

	return 0;
}
