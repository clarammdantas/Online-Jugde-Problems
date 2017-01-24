//codeforces 608A

#include <bits/stdc++.h>

using namespace std;

int maximo(int a, int b){
	if(a >= b) return a;
	else return b;
}

int main(){
	int x, y;
	cin >> x >> y;
	
	int antwort = y;
	
	int k, l;
	for (int i = 0; i < x; i++){
		cin >> k >> l;
		antwort = maximo(antwort, k + l);
	}
	
	cout << antwort << endl;
	
	return 0;
}
