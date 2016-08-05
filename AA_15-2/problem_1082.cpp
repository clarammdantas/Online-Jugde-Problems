//conected_components
// uri_1082

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

#define REP(i, a, b)\
	for(int i = (a); i <= int(b); i++)
	
vector<int> pset(26;
void initSet(int size){pset.resize(size); REP(i, 0, size - 1) pset[i] = i;} // clear vector
int findSet(int i) {return (pset[i] == i)? i : (pset[i] = findSet(pset[i]));} 
void unionSet(int i, int j){pset[findSet(i)] = findSet(j);}
bool isSameSet(int i, int j){return findSet(i) == findSet(j);}

int main(){
	ll n;
	cin >> n;
	
	for(ll i = 0; i < n; i++){
		ll v, e;
		cin >> v >> e;
		initSet(27);
		
		for(ll j = 0; j < e; i++){
			char v1, v2;
			cin >> v1 >> v2;
			
			int vx1, vx2;
			vx1 = v1 - 97;
			vx2 = v2 - 97;
			unionSet(vx1, vx2);
		}
		
		pset.sort();
		for(ll i = 0; i < 26; i++){
			
		}
	}
	
	return 0;
}
