//even-odds codeforces - div2A

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
	ll n, position;
	cin >> n >> position;
	
	ll half;
	if(n % 2 == 0){
		half = n / 2;
	}else{half = n / 2 + 1;}
	if(position <= half){
		cout << 1 + (position - 1) * 2 << endl;
	}
	else{
		if(n % 2 == 0){
			cout << 2 + ((position - n/2) - 1) * 2 << endl;
		}
		else{cout << 2 + ((position - n/2) - 2) * 2 << endl;}
	}
	
	return 0;
}
