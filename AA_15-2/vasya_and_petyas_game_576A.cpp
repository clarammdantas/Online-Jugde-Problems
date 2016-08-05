//vasya_and_petya's_game

#include <bits/stdc++.h>

using namespace std;
typedef long long int64;
const int inf = (1 << 30) - 1;
const int64 linf = (1ll << 62) - 1;

int main(){
	int n;
	cin >> n;
	
	vector<int> isPrime(n + 1, true), primes;
	isPrime[0] = 0;
	isPrime[1] = 0;
	
	for(unsigned int i = 2; i * i < n; i++){
		if(isPrime[i]){
			for(int j = i * i; j <= n; j += i){
				isPrime[j] = false;
			}
		}
	}
	
	vector<unsigned int> result;
	for(unsigned int i = 1; i <= n; i++){
		if(isPrime[i]){
			int q = 1;
			while(q <= n / i){
				q *= i;
				result.push_back(q);
			}
		}
	}
	
	cout << sizeof(result) << endl;
	
	for(int i = 1; i < result.size(); i ++){
		printf("%d ", i);
	}
	
	puts("");
	return 0;
}
