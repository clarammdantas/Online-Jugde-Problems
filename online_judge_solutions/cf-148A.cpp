#include <bits/stdc++.h>

using namespace std;

int main() {
	int y, k, n, m = 1, x = 0;
	scanf("%d %d %d", &y, &k, &n);

	vector<int> nums;

	while((x + y) <= n) {
		x = m * k - y;
		if (x > 0 && x + y <= n) nums.push_back(x);
		m++;
	}

	for (int i = 0; i < nums.size(); i++) {
		if (i < nums.size() - 1) printf("%d ", nums.at(i));
		else printf("%d\n", nums.at(i));
	}

	if (nums.size() == 0) printf("-1\n");

	return 0;
}
