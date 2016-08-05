//algarismos soma - uri

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll sumA(string num){
	if(num.size() == 1) return ;
	ll sum;
	while(num.size() > 1){
		ll sum = 0;
		for(ll i = 0; i < num.size(); i++){
			sum += num[i] - '0';
		}
	}
	return sum;
}

int main(){
	string x, y;
	cin >> x >> y;
	while(x != "0" || y != "0"){
		int nx = sumA(x);
		int ny = sumA(y);
		
		if(nx > ny) cout << 1 << endl;
		else if (nx == ny) cout << 0 << endl;
		else cout << 2 << endl;
		
		cin >> x >> y;
	}
	
	return 0;
}
