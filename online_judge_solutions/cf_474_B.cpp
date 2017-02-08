//codeforces div2 - 474 B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

vector<ll> np;
vector<pair<ll, ll> > intervals;

ll findWorm(ll find, ll p) {
	ll begin = 0, end = p-1, mid = (begin + (end - begin)) / 2;
	if(intervals.at(mid).first <= find && intervals.at(mid).second >= find) return mid + 1;
	
	while(begin <= end){
		mid = begin + ((end - begin) / 2);
		
		if(intervals.at(mid).second < find) begin = mid + 1;
		else if(intervals.at(mid).first > find) end = mid -1;
		else return mid + 1;
	}
	
	return -1;
}

int main(){
	ll p;
	cin >> p;
	
	for(ll i = 0; i < p; i++) {
		ll kp;
		cin >> kp;
		np.push_back(kp);
	}
	
	for(ll i = 0; i < p; i++) {
		ll qtd;
		if(i == 0) qtd = 0;
		else qtd = intervals.at(intervals.size()-1).second;
		
		pair<ll, ll> delimitators;
		delimitators.first = qtd + 1;
		delimitators.second = qtd + np.at(i);
		intervals.push_back(delimitators);
	}
	
	ll q;
	cin >> q;
	vector<ll> queries;
	
	for(ll i = 0; i < q; i++) {
		ll qi;
		cin >> qi;
		queries.push_back(qi);
	}
	
	for(ll i = 0; i < q; i++) {
		cout << findWorm(queries.at(i), p) << endl;
	}
	
	return 0;
}
