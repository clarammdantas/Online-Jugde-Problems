//problem 1134 uri

#include <bits/stdc++.h>

using namespace std;

int main() {
	map<int, string> fuelType;
	fuelType[1] = "Alcool";
	fuelType[2] = "Gasolina";
	fuelType[3] = "Diesel";
	
	int freq[3] = {0, 0, 0};
	
	int q;
	do {
		cin >> q;
		
		if(0 < q && q < 4)
			freq[q - 1] += 1;
			
	} while(q != 4);
	
	cout << "MUITO OBRIGADO" << endl;
	
	for(int i = 0; i < 3; i++) {
		cout << fuelType[i + 1] << ": ";
		cout << freq[i] << endl;
	}
	
	return 0;
}
