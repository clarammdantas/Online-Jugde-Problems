// Week 1 - Coursera - Create a Team!
// ClaraMM

#ifdef JUDGE
#include <fstream>
#include <vector>
std::ifstream cin("team.in");
std::ofstream cout("team.out");
#else
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
#endif

using namespace std;

int main() {
	int max = 0;
	vector<int> indexMax;
	vector<vector<int> > habilities;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x;
			cin >> x;

			if (x >= max){ max = x; indexMax.push_back(0) = i; indexMax.push_back(1) = j;}
		}
	}

	int total += max * max;
	max = 0;
	for (int i = 0; i < 3; i++) {
		if (i == habilities.at(0)) continue;
		for (int j = 0; j < 3; j++) {
			if (j == habilities.at(1)) continue;
			if (habilities.at(i).at(j) > max)
		}
	}


	return 0;
}