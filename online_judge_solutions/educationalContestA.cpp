//educational contest question a

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	
	vector<ll> nums;
	for(ll i = 0; i < n; i++){
		ll x;
		cin >> x;
		nums.push_back(x);
	}
	
	ll greater = 1;
	ll temp = 1;
	
	for(ll i = 0; i < n - 1; i++) {
		if(nums.at(i) < nums.at(i + 1)) temp++;
		else{
			if(temp > greater) greater = temp;
			temp = 1;
		}
	}
	if(temp > greater) greater = temp;
	
	cout << greater << endl;
	
	return 0;
}
