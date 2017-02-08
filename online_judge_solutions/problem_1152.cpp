// problem 1152 - uri - dark roads

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

#define REP(i, a, b)\
	for(int i = int(a); i <= int(b); i++)

vector<pair<ll, ll > > node; // peso, no
//void initSet(ll size){node.resize(size); REP(i, 0, size - 1) node[i]<1>(node)= node[i]<1>(node);}
int findSet(ll i) {return (node[i]<1>(node) == i) ? i : (node[i]<1>(node) = findSet(node[i]<1>(node)));}
void unionSet(ll i, ll j){node[findSet(i)].second = findSet(j);}
bool isSameSet(ll i, ll j) {return findSet(i) == findSet(j);}

int main(){
	ll nodes, edges;
	
	while(true){
		cin >> nodes >> edges;
		
		if (nodes == 0 && edges == 0) break;
		
		vector <pair<weight, pair<int, int> > > graph;
		ll totalDistance = 0;
		for (ll i = 0; i < edges; i++){
			ll vertex1, vertex2, weight;
			cin >> vertex1 >> vertex2 >> weight;
			
			totalDistance += weight;
			graph.push_back(make_pair(make_pair(vertex1, vertex2), weight));
		}
	}
	
	return 0;
}
