//anya_and_smartphone

#include <bits/stdc++.h>

int aplicativo[100005];
int s[100005];
using namespace std;

int main(){
	int r, t, y;
	long long antwort = 0;
	
	cin >> r >> t >> y;
	
	for (int i = 0; i < r; i++){
		int p;
		
		cin >> p;
		aplicativo[p] = i;
		s[i] = p;
	}
	
	for(int i = 0; i < t; i++){
		int g, p;
		cin >> g;
		antwort += aplicativo[g] / y + 1LL;
		p = aplicativo[g];
		
		if(p > 0){
			swap(aplicativo[s[p]], aplicativo[s[p - 1]]);
			swap(s[p], s[p - 1]);
		}
	}
	
	cout << antwort << endl;
	return 0;
}
