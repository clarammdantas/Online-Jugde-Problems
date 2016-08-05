//problem_467A Codeforces

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int possibilities = 0;
	for (int i = 0; i < n; i++) {
		int hab, cap;
		cin >> hab >> cap;
		
		if(cap - hab >= 2)possibilities += 1;
	}
	
	cout << possibilities << endl;
	return 0;
}
