//codeforces_problem_489_B

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int menor(int x, int y){
	if(x >= y)return y;
	else return x;
}

int main(){
	int boys, girls;
	int hBoys[boys], hGirls[girls];
	
	cin >> boys;
	for(int i = 0; i < boys; i++){
		int hab;
		cin >> hab;
		hBoys[i] = hab;
	}
	
	cin >> girls;
	for(int i = 0; i < girls; i++){
		int hab;
		cin >> hab;
		hGirls[i] = hab;
	}
	
	sort(hGirls, hGirls + girls);
	sort(hBoys, hBoys + boys);
	
	int i = 0, j = 0, lim = menor(boys, girls), result = 0;
	
	while(i < lim && j < lim){
		if(hGirls[i] == hBoys[j]){
			result++;
			i++;
			j++;
		}
		else if(abs(hGirls[i] - hBoys[j]) == 1){
			result++;
			i++;
			j++;
		}
		
		else if(hGirls[i] > hBoys[j])j++;
		else if(hGirls[i] < hBoys[j])i++;
	}
	
	cout << result << endl;
	return 0;
}
