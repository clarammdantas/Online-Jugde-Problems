// marbles uri 1025

#include <bits/stdc++.h>

using namespace std;

vector<int> marbles;

int findMarble(int x, int n){
	int begin = 0, end = n-1, guess = marbles.at((end - begin) / 2);
	
	int result = -2;
	while(end >= begin){
		int mid = begin + (end - begin) / 2;
		
		if(marbles.at(mid) == x) {
			end = mid--;
			begin = 0;
			result = mid;
		}
		if(marbles.at(mid) > x) end = mid++;
		else begin = mid++;
	}
	
	return result + 1;
}

int main(){
	int n, q;
	cin >> n >> q;
	int caseNumber = 0;
	
	while(n != 0 && q != 0){
		caseNumber++;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			
			marbles.push_back(x);
		}
		
		sort(marbles.begin(), marbles.end());
		
		vector<pair<int, int> > result;
		for(int i = 0; i < q; i++) {
			int q;
			cin >> q;
			int index = findMarble(q, n);
			
			pair<int, int> r = make_pair(q, index);
			result.push_back(r);
		}
		
		cout << "CASE# " << caseNumber << endl;
		for(int i = 0; i < q; i++) {
			if(result.at(i).second < 0) cout << result.at(i).first << " not found" << endl;
			else cout << result.at(i).first << " found at " << result.at(i).second << endl;
		}
		
		cin >> n >> q;
	}
	
	return 0;
}
