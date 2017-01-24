//gifts -codeforces div2-A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> nums;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		nums.push_back(x);
	}
	
	vector<int> realOrder;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i + 1) == nums.at(j)){
				realOrder.push_back(j + 1);
				break;
			}
		}
	}
	
	for(int i = 0; i < n; i ++){
		if(i < n - 1){ cout << realOrder.at(i) << " ";}
		else {cout << realOrder.at(i) << endl;}
	}
	
	return 0;
}
