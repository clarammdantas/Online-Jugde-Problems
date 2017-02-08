//problem_1807
#include <bits/stdc++.h>

using namespace std;

long long myPowFunction(long long y){
	long long result = 1LL, b = 3LL, sumModular = 2147483647;;
	
	while(y){
		if (y&1) result = (result * b) % sumModular;
		
		b = (b * b) % sumModular;
		y = (y >> 1);
	}	
	
	return result;
}

int main(){
	long long l;
	cin >> l;
	
	long long result =  myPowFunction(l);
	
	cout << result << endl;
	return 0;
}
