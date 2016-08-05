//janela - spoj

#include <bits/stdc++.h>

using namespace std;

int main(){
	int holes = 0;
	vector<int> start;
	
	start.push_back(0);
	for(int i = 0; i < 3; i++){
		int s;
		cin >> s;
		start.push_back(s);	
	}
	start.push_back(600);
	sort(start.begin(), start.end());
	
	holes += start.at(1);
	for(int i = 1; i < start.size() - 1; i++){
		int ends = start.at(i) + 200;
		int new_begin = start.at(i +1);
		
		if(ends < new_begin) holes += new_begin - ends;
	}
	
	cout << holes * 100 << endl;
	return 0;
}
