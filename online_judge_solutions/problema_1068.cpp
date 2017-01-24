#include <bits/stdc++.h>
using namespace std;

int main(){
	string expression;
	int control = 0;
	bool incorrect = false;
	
	while(cin >> expression){
		for (char & c : expression)
		{
			if(c == '('){
				control += 1;
			}
			else if (c == ')'){
				control -= 1;
			}
			if (control < 0){
				incorrect = true;
				cout << "incorrect" << endl;
				break;
			}

		}
		if (!incorrect)
		cout << "correct" << endl;
		break;
	}
	
	return 0;
}
