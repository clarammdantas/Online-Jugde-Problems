//cf 701 - div 2 a

#include <bits/stdc++.h>
using namespace std;

vector<int> used_cards;

bool findMyKiss(int index){
	for(int i = 0; i < used_cards.size(); i++){
		if(index == used_cards.at(i)) return true;
	}
	
	return false;
}

int main(){
	int n;
	cin >> n;
	int sumation = 0;
	int num_card[n];
	
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		
		sumation += k;
		num_card[i] = k;
	}
	
	int qtd = sumation / (n/2);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(findMyKiss(i) || findMyKiss(j))break;
			else if(num_card[i] + num_card[j] == qtd){
				used_cards.push_back(i);
				used_cards.push_back(j);
				cout << i + 1 << " " << j + 1 << endl;;
				break;
			}
		}
	}
	
	return 0;
}
