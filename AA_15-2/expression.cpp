//expression codeforces - div2A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	
	int ans = x + y + z;
	ans = max(ans, (x + y) * z);
	ans = max(ans, x * (y + z));
	ans = max(ans, x * y * z);
	
	cout << ans << endl;
	
	return 0;
}
