//puzzles codeforces-div2A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int nStudent, nPuzzle;
	cin >> nStudent >> nPuzzle;
	
	vector<int> prices; 
	for(int i = 0; i < nPuzzle; i++){
		int x;
		cin >> x;
		prices.push_back(x);
	}
	
	sort(prices.begin(), prices.end());
	int difM = 1001;
	for(int i = 0; i < nPuzzle; i++){
		int Rdif;
		if(i + (nStudent - 1) <= nPuzzle -1)Rdif = prices.at(i + nStudent - 1) - prices.at(i);
		if(Rdif < difM) difM = Rdif;
	}
	
	cout << difM << endl;
	return 0;
}
