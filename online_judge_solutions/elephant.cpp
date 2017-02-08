//elephant - codeforces-div2A

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll x;
	cin >> x;
	
	ll total = 0;
	for(int i = 5; i > 0; i--){
		total += x / i;
		if(x % i == 0){
			cout << total << endl;
			break;
		}
		x = x % i;
	}
	
	return 0;
}
