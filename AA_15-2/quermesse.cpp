//quermesse - spoj

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll test = 0;
	ll x;
	cin >> x;
	while(x != 0){
		test += 1;
		
		ll winner;
		for(int i = 1; i < x + 1; i++){
			ll y;
			cin >> y;
			
			if(y == i){winner = y;}
		}
		
		cout << "Teste " << test << endl;
		cout << winner << endl;
		cout << "\n";
		cin >> x;
	}
	
	return 0;
}
