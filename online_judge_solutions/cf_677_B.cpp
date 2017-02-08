//codeforces div2 - 677_B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
	ll n, h, k;
	cin >> n >> h >> k;
	
	ll needSmash = 0;
	ll time = 0;
	for(ll i = 0; i < n; i++) {
		ll m;
		cin >> m;
		
		if(m + needSmash <= h) time += (m + needSmash) / k, needSmash = (m + needSmash) % k;
		else time += m / k + 1, needSmash = m % k;
	}
	
	if(needSmash > 0) time += 1;
	cout << time << endl;
	
	return 0;
}
