#include <bits/stdc++.h>

using namespace std;

int main() {
	int i, j;

	while ( scanf("%d %d", &i, &j) != EOF) {
		int m, n, ans;

		if (i <= j) {
			m = i; n = j;
		} else {
			m = j; n = i;
		}

		ans = -1;

		for (int k = m; k < n + 1; k++) {
			int div = 1, aux = k;

			while(aux > 1) {
				div++;

				if (aux % 2 == 0) aux /= 2;
				else aux = 3 * aux + 1;
			}

			if (ans < div) ans = div;
		}

		printf("%d %d %d\n", i, j, ans);
	}

	return 0;
}
