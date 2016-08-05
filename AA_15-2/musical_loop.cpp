//musical loop cpp - uri

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void lost(int n){
	int w[n];
	int gipfel = 0;
	
	for (int i = 0; i < n; i++)
		cin >> w[i];
		
	if ( (w[0] - w[n - 1]) * (w[0] - w[1]) > 0 )
		gipfel++;
	
	if ( (w[n - 1] - w[n - 2]) * (w[n - 1] - w[0]) > 0 )
		gipfel++;
	
	for (int i = 1; i < n - 1; i++){
		if ( (w[i] - w[i - 1]) * (w[i] - w[i + 1]) > 0 )
			gipfel++;
		}
		cout << gipfel << endl;
	}
	
	int main(){
		int n;
		cin >> n;
		
		while (n != 0) {
			lost(n);
			
			cin >> n;
		}
		
		return 0;
}
