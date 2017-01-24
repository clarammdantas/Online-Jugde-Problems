//cheap travel - codeforces div 2a

#include <bits/stdc++.h>
using namespace std;

int min(int x, int y){
	if(x > y) return y;
	return x;
}

int main(){
	int nR, sT, oneT, priceST;
	cin >> nR >> sT >> oneT >> priceST;
	
	if(oneT * sT <= priceST){
		cout << oneT * nR << endl;
	}else{
		cout << (nR/sT) * priceST + min((nR % sT) * oneT, priceST) << endl;
	}
	
	return 0;
}
