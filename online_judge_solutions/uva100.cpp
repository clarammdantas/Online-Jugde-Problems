//uva - p100 - The 3n + 1 problem

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

const long long int MAX = 1000001;

int main() {
	map<int, int> cycles;
	cycles[1] = 1;

	for (ll i = 2; i < MAX; i++) {
		ll c = 0;
		ll temp = i;
		
		while (temp > 1) {
			if (temp % 2 == 0) {c += 1; temp = temp / 2;}
			else {c += 1; temp = temp * 3 + 1;}	
		}
		cycles[i] = c;
		
	}
	
	ll s, b, max;
	
	while(cin >> s >> b) {
		max = -1;

		for (ll i = s; i < b + 1; i++) {
			if (cycles[i] > max) max = cycles[i];
		}
		
		if (max == 1) max = 0;
		cout << s << " " << b << " " << max + 1 << endl;
	}
	
	return 0;
}
