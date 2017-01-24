//uva_10783 
//odd sum

#include <bits/stdc++.h>

using namespace std;
vector<int> sums;

void doOddSum(){
	sums.push_back(0);
	for (int i = 1; i <= 100; i++){
		if(i % 2 != 0){
			long long int num = sums[sums.size()-1] + i;
			sums.push_back(num);
		}else{
			sums.push_back(sums[sums.size()-1]);
		}
	}
}

int main(){
	doOddSum();
	
	int q, a, b;
	scanf("%d\n", &q);
	vector<long long int> result;
	
	for(int i = 0; i < q; i++){
		cin >> a;
		cin >> b;
		
		if (a == b){
			if(a % 2 != 0) sums.push_back(sums[a]);
			else sums.push_back(sums[0]);
		}else{if (a % 2 != 0) result.push_back(sums[b] - sums[a] + a);else result.push_back(sums[b] - sums[a]);}
	}
	
	for(int i = 1; i <= q; i++){
		cout << "Case " << i << ": " << result[i-1] << endl;
	}
		
	return 0;
}
