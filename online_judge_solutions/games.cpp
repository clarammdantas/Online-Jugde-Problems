//games codeforces-div2a

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<int, int> > colors;
	for(int i = 0; i < n; i++){
		pair<int, int> c;
		int x, y;
		cin >> x >> y;
		c.first = x;
		c.second = y;
		colors.push_back(c);
	}
	
	int changes = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				if(colors.at(i).first == colors.at(j).second) changes++;
			}
		}
	}
	
	cout << changes << endl;
	
	return 0;
}
