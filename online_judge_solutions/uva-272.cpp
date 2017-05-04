//UVa - 272

#include <bits/stdc++.h>
#define MAX 100003

using namespace std;

int main() {
	long int i, l;
	bool opening = true;
	char in[MAX];

	while(cin >> in) {
		l = strlen(in);

		for (i = 0; i < l; i++) {
			if (in[i] == '"' && opening) {
				opening = false;
				printf("``");
			}

			else if (in[i] == '"' && !opening) {
				opening = true;
				printf("''");
			}

			else {
				printf("%c", in[i]);
			}
		}

		printf("\n");
	}

	return 0;
}
