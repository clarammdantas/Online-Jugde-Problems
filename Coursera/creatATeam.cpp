// Week 1 - Coursera - Create a Team!
// ClaraMM

#ifdef JUDGE
#include <fstream>
#include <vector>
#include <math.h>
std::ifstream cin("team.in");
std::ofstream cout("team.out");
#else
#include <iostream>
#include <vector>
#include <math.h>
using std::cin;
using std::cout;
#endif

#include <iomanip>
using namespace std;

int main() {
	int max = 0, iMax = -1, jMax = -1;
	vector<int> indexMax;
	vector<vector<int> > habilities;

	for (int i = 0; i < 3; i++) {
		vector<int> aux;
		for (int j = 0; j < 3; j++) {
			int x;
			cin >> x;

			aux.push_back(x);

			if (x >= max){
				max = x; 
				iMax = i;
				jMax = j;
			}
		}
		habilities.push_back(aux);
	}

	indexMax.push_back(iMax); indexMax.push_back(jMax);

	int total = max * max;
	max = 0, iMax = -1, jMax = -1;
	for (int i = 0; i < 3; i++) {
		if (i == indexMax.at(0)) continue;
		for (int j = 0; j < 3; j++) {
			if (j == indexMax.at(1)) continue;
			if (habilities.at(i).at(j) >= max) { max = habilities.at(i).at(j); iMax = i; jMax = j;}
		}
	}

	indexMax.push_back(iMax); indexMax.push_back(jMax);

	total += max * max;

	for (int i = 0; i < 3; i++) {
		if (i == indexMax.at(0) || i == indexMax.at(2)) continue;
		for (int j = 0; j < 3; j++) {
			if (j == indexMax.at(1) || j == indexMax.at(3)) continue;
			total += (habilities.at(i).at(j) * habilities.at(i).at(j));
		}
	}
	
	double result = sqrt(total);

	cout << fixed << setprecision(10) << result << endl;

	return 0;
}