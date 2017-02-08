//Preface

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	int q;
	if(y < 0)
		q = (int)ceil((double)x / y);
	else
		q = (int)floor((double)x / y);

	int r = x - y * q;
	cout << q << " " << r << endl;

	return 0;
}