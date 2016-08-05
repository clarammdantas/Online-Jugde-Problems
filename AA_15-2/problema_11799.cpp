//problem_11799 - UVa

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> speeds;
	
	for(int i = 0; i < n; i++){
		long long x;
		while(x != '\n'){
			cin >> x;
			speeds.push_back(x);
		}
		sort(speeds.begin(), speeds.end());
		cout << speeds.back()<< endl;
	}
	
	return 0;
}
