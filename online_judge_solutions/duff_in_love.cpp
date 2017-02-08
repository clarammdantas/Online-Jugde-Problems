//duf_in_love
 
#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
vector<ll> isPrime(ll x){
	vector<ll> primitos;
	ll tamanho = static_cast<int>(sqrt(x)), segundoTamanho = sizeof(primitos);
	primitos.push_back(2LL);
	
	bool is_Prime = true;
	for (ll i = 2LL; i <= tamanho; i++){
		for (ll j = 0; j <= segundoTamanho; j++){
			if(i % primitos[j] == 0){
				is_Prime = false;
				break;
			}
			segundoTamanho = sizeof(primitos);
		}
		if(is_Prime){
			primitos.push_back(i);
		}
		
		for (int i = 0; i < primitos.size(); i++){
			cout << primitos[i] << " " << endl;
		}
	}
	
	return primitos;
}

int main(){
	ll n;
	
	scanf("%lld", &n);
	
	vector<ll> primos = isPrime(n);
	
	ll result = 1LL;
	
	for(ll i = 0LL; i <= primos.size(); i++){
		if(n % primos[i] == 0){
			result *= primos[i];
		}
		
		while (n % primos[i]){
			n = n / primos[i];
		}
	}
	
	if(n > 1) result *= n;
	cout << result << endl;
	
	return 0;
}
