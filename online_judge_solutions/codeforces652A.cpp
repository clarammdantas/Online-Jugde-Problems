//gabriel_and_caterpillar - codeforces
//652_A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int h1, h2, a, b;
	cin >> h1 >> h2;
	cin >> a >> b;
	
	if(h1 + 8 * a > h2 || h1 + 8*a == h2)cout << 0 << endl;
	else if(a < b || a == b)cout << -1 << endl;
	else{
		int num = h2 - h1 - 8 * a;
		int days = 12*(a - b);
		cout << (num + days - 1) / days << endl;;
	}
	
	return 0;
}
