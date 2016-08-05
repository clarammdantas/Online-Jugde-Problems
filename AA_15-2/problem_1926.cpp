//marianne and the twins

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(ll x){
	if (x == 1LL) return false;
	ll end = static_cast<ll>(sqrt(x));
	
	for(ll i = 3LL; i < end; i ++){
		if (x % i == 0) return false;
	}
	
	return true;
}

ll maior(ll x, ll y){
	if(x >= y)return x;
	return y;
}

ll menor(ll x, ll y){
	if(x >= y) return y;
	return x;
}

int main(){
	ll x, y, maiorN, menorN, result = 0LL, n;
	scanf("%lld", &n);
	
	while(n >= 0){
		scanf("%lld %lld", &x, &y);
		
		maiorN = maior(x, y) + 1;
		menorN = menor(x, y);
		
		if (menorN % 2 == 0) menorN += 1;
		
		for (ll i = menorN; i < maiorN; i += 2){
			if (i == 3LL or i == 5LL or i == 7LL) result += 1;
			
			else if(isPrime(i) && isPrime(i + 2)){ 
				if(i + 2 < maiorN) result += 2;
				else result += 1;
			}
		}
		
		printf("%lld\n", result);
	}
	return 0;
}
