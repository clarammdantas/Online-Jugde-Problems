// Perfect Permutation - olha, arthur como eu to certa

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n % 2 != 0)
		cout << "-1" << endl;
		
	else {
		int a = 2, c = 1;
		
		for (int i = 0; i < n; i++) {
			if (i != n - 1) {
				if (i % 2 == 0) {
					cout << a << " ";
					a += 2;
				} else {
					cout << c << " ";
					c += 2;
				}
			}
			
			else {
				if (i % 2 == 0) {
					cout << a << endl;
					a += 2;
				} else {
					cout << c << endl;
					c += 2;
				}
			}
		}
	}
	
	return 0;
}
