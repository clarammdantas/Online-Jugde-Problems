//problem_1199

#include <bits/stdc++.h>
#include <map>
#define INIT 1;

using namespace std;

int main(){
	while(true){
		string number;
		
		cin >> number;
		
		if(number.substr(2) != "0x"){
			for(int i = 0; i < number.size(); i++){
				static_cast<int>(static_cast<unsigned char>number[i]));
				
			}
				 break;
			}
			else{
				stringstream ss;
				ss << hex << number;
				string res(ss.str());
				
				printf("0x%s", &res);
			}
		}
		else{
			stringstream ss;
			ss << number;
			ss >> hex >> number;
			
			cout << number << endl;;	
		}
	}
		return 0;
}
