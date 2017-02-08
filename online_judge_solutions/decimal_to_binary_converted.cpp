#include <bits/stdc++.h>

//decimal_to_binary_converting

using namespace std;

bool ToBinary(long long int x, unsigned int zeros){
	if (x % 2 == 0){
		zeros += 1;
	}
	
	x = x / 2LL;
	if (x == 0){
		if (zeros == 1){ 
			return true;
		}
		else{ 
			return false;
			}
	}
	ToBinary(x, zeros);
}

int main(){
	long long int begin, end;
	cin >> begin >> end;
	
	int one_zero = 0;
	bool one;
	
	for (int i = begin; i <= end; i++){
		one = ToBinary(i, 0);
		if (one) one_zero += 1;
	}
	
	cout << one_zero << endl;
	
	return 0;
}
