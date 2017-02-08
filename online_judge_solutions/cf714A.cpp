//cf - contest 714-A

#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;

ll min(int a, int b) {
	if (a <= b) return a;
	return b;
}

ll max(int a, int b) {
	if (a >= b) return a;
	return b;
}

int main() {
	ll l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;

	ll begin = max(l1, l2);
	ll end = min(r1, r2);

	ll total = end - begin + 1;

	if (begin <= k && k <= end)
		total -= 1;

	if (r1 < l2 && r2 > r1 || r2 < l1 && r2 < r1) total = 0;

	cout << total << endl;

	return 0;
}
