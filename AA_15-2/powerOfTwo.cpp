//power of two

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll n;
	scanf("%lld", &n);
	
	vector<ll> nums;
	for(ll i = 0; i < n; i++) {
		ll x;
		scanf("%lld", &x);
		nums.push_back(x);
	}
	
	ll pairs = 0;
	for(ll i = 0; i < n; i++) {
		for(ll j = i + 1; j < n; j++) {
			ll k = nums.at(i) + nums.at(j);
			if(k == 0) break;
			if((k & (k - 1)) == 0) pairs++; 
		}
	}
	
	printf("%lld \n", pairs);
	
	return 0;
}
