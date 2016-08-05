//problem_1307 URI
#include <bits/stdc++.h>

using namespace std;

unsigned int toDecimal(string binary){
	unsigned int decimal = 0;
	double pot = binary.size() - 1;
	
	for (unsigned int i = 0; i < binary.size(); i++){
		int binaryC = binary[i] - '0';
		decimal += binaryC * pow(2.0, pot);
		pot -= 1;
	}
	
	return decimal;
}

int mdc(unsigned int x, unsigned int y){
	unsigned int maior, menor, resto;
	if (x >= y){ maior = x; menor = y;}
	else {maior = y; menor = x;}
	
	while(menor != 0){
		resto = maior % menor;
		maior = menor;
		menor = resto;
	}
	return maior;
	
}

int main(){
	int n;
	cin >> n;
	
	string s1, s2;
	for(int i = 0; i < n; i++){
		cin >> s1;
		cin >> s2;
		
		unsigned int dec_1, dec_2;
		dec_1 = toDecimal(s1);
		dec_2 = toDecimal(s2);
		
		if (mdc(dec_1, dec_2) !=  1) cout << "Pair #" << i + 1 << ": All you need is love!" << endl;
		else cout << "Pair #" << i + 1 << ": Love is not all you need!" << endl;
	}

	return 0;
}
