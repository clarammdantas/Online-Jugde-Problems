//codeforces
//simple_game - 670-B

#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main(){
	lli max, misha;
	cin >> max >> misha;
	lli result;
	
	if(max % 2 == 0){
		if (misha <= max / 2){
			result = misha + 1;
		}
		else{
			result = misha - 1;
		}
	}
	
	else{
		if (misha >= (max / 2) + 1){
			result = misha - 1;
		}
		else{
			result = misha + 1;
		}
	}
	
	if(result == 0)cout << 1 << endl;
	else cout << result << endl;
	return 0;
}
