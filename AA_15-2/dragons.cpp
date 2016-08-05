//codeforces - dragons div2 a

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool comp(const pair<ll, ll> &td1, const pair<ll, ll> &td2){
	return td1.first < td2.first;
}

int main(){
	ll s, n;
	cin >> s >> n;
	vector<pair<ll, ll> > data;
	
	for(ll i = 0; i < n; i++){
		ll force, gain;
		cin >> force >> gain;
		
		data.push_back(make_pair(force, gain));
	}
	
	sort(data.begin(), data.end(), comp);
	
	bool possible = true;
	for(ll i = 0; i < n; i++){
		if(s > data.at(i).first) s+= data.at(i).second;
		else possible = false;
	}
	
	if(possible) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
