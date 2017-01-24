// Codeforces - Greg's Workout - div 1 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int chest = 0, biceps = 0, back = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if ((i + 1) % 3 == 1) chest += x;
		else if ((i + 1) % 3 == 2) biceps += x;
		else back += x;
	}
	
	if (chest > back && chest > biceps) cout << "chest" << endl;
	else if (back > chest && back > biceps) cout << "back" << endl;
	else cout << "biceps" << endl;
	
	return 0;
}
