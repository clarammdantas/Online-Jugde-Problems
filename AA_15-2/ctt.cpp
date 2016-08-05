//ctt - spoj

#include <bits/stdc++.h>

using namespace std;

int main(){
	double a, g, ra, rg;
	cin >> a >> g >> ra >> rg;
	
	double rendimentoA = a * ra;
	double rendimentoG = g * rg;

	if(g == a){cout << "G" << endl;}
	else if(rendimentoA > rendimentoG){cout << "G" << endl;}
	else{cout << "A" << endl;}
	
	return 0;
}
