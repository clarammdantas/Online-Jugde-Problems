#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - 1) {
				if (i == j) printf("%d\n", k);
				else printf("%d\n", 0);
			} else {
				if (i == j) printf("%d ", k);
				else printf("%d ", 0);
			}
		}
	}

	return 0;
}
