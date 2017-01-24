//arrival-of-the-general codeforces-div2A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	pair<int, int> maior;
	maior.first = 0;
	maior.second = 100;
	pair<int, int> menor;
	menor.first = 101;
	menor.second = 100;
	vector<int> nums;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		
		if(x > maior.first){
			maior.first = x;
			maior.second = i;
		}
		if(x < menor.first){
			menor.first = x;
			menor.second = i;
		}
		if(x == maior.first && i < maior.second){
			maior.first = x;
			maior.second = i;
		}
		if(x == menor.first && i > menor.second){
			menor.first = x;
			menor.second = i;
		}
		nums.push_back(x);
	}
	 
	int moves = 0;
	if(menor.second > maior.second){
		moves = (n - 1 - menor.second) + maior.second;
	}else{
		moves = n - menor.second + maior.second - 2;
	}
	cout << moves << endl;
	return 0;
}
