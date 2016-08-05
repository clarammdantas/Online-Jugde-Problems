// matrioshkas
// codeforces

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int result = 2 * n - k + 1;
	
	for (int i = 0; i < k; i++){
		int c;
		cin >> c;
		
		for(int i = 0; i < c; i++){
			int m;
			scanf("%d", &m);
			if(m == i + 1){
				result -= 2;
			}
		}
	}
	cout << result << endl;
	
	return 0;
}
