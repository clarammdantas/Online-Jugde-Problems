#include <bits/stdc++.h>

//problem_1258

using namespace std;

int main(){
	int n;
	string name;
	string shirt_type;
	int sizes["branco P", "branco M", "branco G", "vermelho P", "vermelho M", "vermelho G"];
	

	while(cin >> n != 0){
		map<string, vector<string> > names;
		for (int i = 0; i < n; i++){
			cin >> name;
			cin >> shirt_type;
			if(names.find(shirt_type) == names.end()){
				names[shirt_type].push_back(name);
			}
			else{
				names[shirt_type].push_back(name);
			}
		}
		for (int i = 0; i < 6; i++){
			for 
		}
	}
	
	return 0;
}
