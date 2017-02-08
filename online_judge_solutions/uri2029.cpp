//mel e seu joao - uri 2029

#include <bits/stdc++.h>

using namespace std;

int main(){
	double vol, d;
	cin >> vol;
	cin >> d;
	
	while(!EOFError){
		double r = d / 2;
		double a = 3.14 * r * r;
		double h = vol / a;
		
		cout << "ALTURA = " << h << endl;
		cout << "AREA = " << a << endl;
		
		cin >> vol;
		cin >> d;
	}
	
	return 0;
}
