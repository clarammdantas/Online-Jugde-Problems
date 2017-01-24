//pashmak and garden - codeforces div2 a

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll MIN = -1000;
const ll MAX = 1000;

int main(){
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	if(y1 == y2){
		ll dist = abs(x1 - x2);
		if((y1 - dist >= MIN) && (y1 - dist <= MAX)){
			cout << x1 << " " << y1 - dist << " " << x2 << " " << y1 - dist << endl;
		}else if((x1 + dist >= MIN) && (x1 + dist <= MAX)){
			cout << x1 << " " << y1 + dist << " " << x2 << " " << y1 + dist << endl;
		}
		else cout << -1 << endl;
	}
	
	else if(x1 == x2){
		ll dist = abs(y1 - y2);
		if((x1 - dist >= MIN) && (x1 - dist <= MAX)){
			cout << x1 - dist << " " << y1 << " " << x1 - dist << " " << y2 << endl;
		}else if((x1 + dist >= MIN) && (x1 + dist <= MAX)){
			cout << x1 + dist << " " << y1 << " " << x1 + dist << " " << y2 << endl;
		}
		else cout << -1 << endl;
	}
	
	else{
		if(abs(x1 - x2) == abs(y1 - y2)){
			ll dist = x1 - x2;
			cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
		}else cout << -1 << endl; 
	}
	
	return 0;
}
