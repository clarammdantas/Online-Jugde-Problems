//game_with_sticks codeforces-div2A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if((x >= y && y % 2 != 0) || (y >= x && x % 2 != 0)) cout << "Akshat" << endl;
	else cout << "Malvika" << endl;

	return 0;
}
