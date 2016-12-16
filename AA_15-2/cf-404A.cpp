// Codeforces - Valera and X - div 1 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

char m[303][303];

int main() {
	bool formX = true;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		scanf("%s", m[i]);
	
	char d = m[0][0], fd = m[1][0];
	if (d != fd) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ( i == j || (n - j - 1) == i) {
					if (m[i][j] != d) {
						formX = false;
						break;
					} 
					
				} else {
						if (m[i][j] != fd) {
							formX = false;
							break;
						}
					}
				
			}
			
			if (!formX) break;
		}
	} else {
		formX = false;
	}
	
	if (formX) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
