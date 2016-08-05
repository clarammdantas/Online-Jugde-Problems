// vanya_and_books

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
	ll n, pot = 0LL, anteriorN, digitos = 0LL, pot10 = 1, usados = 0;
	
	cin >> n;
	
	anteriorN = n; 
	for(ll i = 1LL; i < 10; i++){
		pot = (pot10 * 10 - 1) - pot;
		pot10 *= 10;
		if(n >= pot){
			anteriorN = n - pot;
			digitos += (n - anteriorN) * i;
			usados += (n - anteriorN);
		}
		else{
			digitos += (n - usados) * i;
			break;
		}
	}
	
	cout << digitos << endl;
	return 0;
}
