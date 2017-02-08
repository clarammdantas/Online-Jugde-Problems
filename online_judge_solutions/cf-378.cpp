// Codeforces - div 2 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	int draw = 0, aWin = 0, bWin = 0;
	
	for (int i = 1; i <= 6; i++) {
		if (abs(a - i) < abs(b - i)) aWin += 1;
		else if (abs(b - i) < abs(a - i)) bWin += 1;
		else draw += 1;
	}
	
	cout << aWin << " " << draw << " " << bWin << endl;
	
	return 0;
}
