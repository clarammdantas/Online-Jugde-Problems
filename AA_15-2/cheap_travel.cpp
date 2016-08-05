//cheap travel - codeforces-div2A

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n, m, a, b;
	cin >> n >> m >> a >> b;
	
	ll div = (n / m) * b;
	ll oneWay = n * a;
	
	cout << min(div, oneWay) << endl;	 
	
	return 0;
}
