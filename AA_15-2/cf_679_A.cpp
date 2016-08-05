//codeforces problem 679A

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll t, s, x;
	cin >> t >> s >> x;
	
	ll y = x - t + s;
	ll z = x - (t + s + 1) + s;
	
	if(x < t) cout << "NO" << endl;
	else if(y % s == 0 && y != 0) cout << "YES" << endl;
	else if(z % s == 0 && z != 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
