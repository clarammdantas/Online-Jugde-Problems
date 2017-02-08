// Codeforces - A Minimum Difficulty - div 2 A
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> original;
	
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		original.push_back(x);
	}
	
	int absLeast = 1010;
	for (int i = 1; i < n - 1; i++) {
		vector<int> aux;
		
		for (int j = 0; j < n; j++) {
			if (j != i) aux.push_back(original.at(j));
		}
		
		int least = 0;
		
		for (int k = 0; k < n - 2; k++) {
			int localLeast = aux.at(k + 1) - aux.at(k);
						
			if (localLeast > least) least = localLeast;
		}

		if (least < absLeast) absLeast = least;
	}
	
	cout << absLeast << endl;
	
	return 0;
}
