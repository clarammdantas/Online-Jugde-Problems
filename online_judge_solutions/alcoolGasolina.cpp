//gasolina alcool - spoj

#include <bits/stdc++.h>

using namespace std;

int main(){
	double a, g, pa, pg;
	cin >> a >> g >> pa >> pg;
	
	double costA = a / pa;
	double costB = g / pg;

	if(costA < costB) cout << "A" << endl;
	else cout << "G" << endl;
	
	return 0;
}
