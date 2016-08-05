//quadrados - uri p 1849

#include <bits/stdc++.h>

using namespace std;

int main(){
	long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	long maior = max(x1, y1);
	if(maior == x2 || maior  == y2) cout << maior * maior << endl;
	else if(x1 == x2 || x1 == y2) cout << x1 * x1 <<endl;
	else if (y1 == x2 || y1 == y2) cout << y1 * y1 << endl;
	else cout << 0 << endl;
	
	return 0;
}
