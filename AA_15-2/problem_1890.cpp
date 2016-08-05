#include <bits/stdc++.h>

//problem_1890

using namespace std;

int main(){
	int n;
	cin >> n;
	double cons, dig;
	long long int plates;
	
	for(int i = 0; i < n; i++){
		scanf("%lf %lf", &cons, &dig);
		if (cons != 0 || dig != 0){
			plates = pow(26, cons) * pow(10, dig);
			cout << plates << endl;
		}
		else cout << 0 << endl;
	}
	
	return 0;
}
