//beautiful matrix - codeforces-div2-A

#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int> > matrix;
	pair<int, int> position1;
	
	for(int i = 0; i < 5; i++){
		vector<int> row;
		for(int j = 0; j < 5; j++){
			int x;
			cin >> x;
			if(x == 1){
				position1.first = i + 1;
				position1.second = j + 1;
			}
			row.push_back(x);
		}
		matrix.push_back(row);
	}
	
	int result = abs(position1.first - 3) + abs(position1.second - 3);
	cout << result << endl;
	
	return 0;
}
