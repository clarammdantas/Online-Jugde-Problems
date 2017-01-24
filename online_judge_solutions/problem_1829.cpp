#include <bits/stdc++.h>

//problem_1829

using namespace std;

int main(){
	int n, lucas, pedro;
	cin >> n;
	lucas = 0;
	pedro = 0;
	int a, b, c;
	double fac, exp;
	int victories[n];
	
	for (int i = 0; i < n; i++){
		fac = 0;
		scanf("%d^%d", &a, &b);
		scanf("%d!", &c);
		
		for (int j = 1; j <= c; j++){
			fac += log(j);
		}
		
		exp = b * log(a);
		
		if(exp > fac){
			victories[i] = 1;
			lucas += 1;
		}
		else{
			victories[i] = 0;
			pedro += 1;
		}
	}
	
	if (lucas > pedro) cout << "Campeao: Lucas!" << endl;
	else if (pedro > lucas) cout << "Campeao: Pedro!" << endl;
	else{ cout<< "A competicao terminou empatada!" << endl;}
	
	for (int i = 0; i < n; i++){
		cout << "Rodada #" << i + 1 << ": ";
		if (victories[i] == 1) cout << "Lucas foi o vencedor" << endl;
		else cout << "Pedro foi o vencedor" << endl;
	}
	
	
	return 0;
}
