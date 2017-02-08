//codeforces div2 - primes or palindromes

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll MAX = 2000000;

int main(){
	double p, q;
	cin >> p >> q;
	
	double a = p / q;
	bool primes[MAX];
	primes[0] = false;
	primes[1] = false;
	primes[2] = true;
	
	ll primes_num[MAX];
	primes[0] = 0;
	primes[1] = 0;
	
	ll palinds[MAX];
	palinds[0] = 0;
	palinds[1] = 1;
	palinds[2] = 2;
	
	ll t = 0;
	for(ll i = 2; i < MAX; i++){
		if(primes[i]){
			t += 1;
			primes_num[i] = p;
			for(ll j = i * i; j < MAX; j += i){
				primes[j] = false;
			}
		}
		else primes[i] = t;
	}
	
	ll c = 2;
	for(ll i = 3; i < MAX; i++){
		ll n = i;
		ll rev = 0;
		ll dig = 0;
		while(n > 0){
			dig = n % 10;
			rev = rev * 10 + dig;
			n /= 10;
		}
		if(n == rev) c+= 1;
		palinds[i] = c;
	}
	
	ll m = 0;
	for(ll i = 0; i < MAX-1; i++){
		if(primes_num[i] <= palinds[i] * a) m = i;
	}
	
	cout << m << endl;
	return 0;
}
