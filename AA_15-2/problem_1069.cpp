#include <bits/stdc++.h>

//problem_1069

using namespace std;

int abs(int x){
	if (x < 0) return x * -1;
	return x;
}

int main(){
	int n, diamonds, control;
	cin >> n;
	string mine;
	
	for (int i = 0; i < n; i++){
		control = 0;
		diamonds = 0;
		cin >> mine;
		
		for (int j = 0; j < mine.size(); j++){
			if (mine[j] == '>'){
				if (control - 1 >= 0) diamonds += 1; 
				control -= 1;
			}
			else if (mine[j] == '<') control += 1;
			
			if (control < 0) control = 0;
		}
		
		cout << diamonds << endl;
		}
		return 0;
	}
