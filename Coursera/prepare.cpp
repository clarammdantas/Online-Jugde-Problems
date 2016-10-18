// Week 1 - Coursera - Prepare yourself to competetions

#ifdef JUDGE
#include <fstream>
#include <vector>
std::ifstream cin("prepare.in");
std::ofstream cout("prepare.out");
#else
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
#endif

using namespace std;

int main() { 
	int n;
	cin >> n;

	vector<int> theory;
	vector<int> practice;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		theory.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		practice.push_back(x);
	}

	int total = 0, theoryDay = 0, practiceDay = 0;

	for (int i = 0; i < n; i++) {
		if (theory.at(i) >= practice.at(i)) {
			total += theory.at(i);
			theoryDay += 1;
		} else {
			total += practice.at(i);
			practiceDay += 1;
		}
	}

	if (theoryDay == 0) {
		int indexLowest = -1;
		int menor = 10000;
		for (int i = 0; i < n; i++) {
			if (practice.at(i) < menor) {
				menor = practice.at(i);
				indexLowest = i;
			} else if (practice.at(i) == menor) {
				if (theory.at(i) > theory.at(indexLowest)) {
					menor = practice.at(i);
					indexLowest = i;
				}
			}
		}

		total -= practice.at(indexLowest);
		total += theory.at(indexLowest);
	}

	else if (practiceDay == 0) {
		int indexLowest = -1;
		int menor = 10000;
		for (int i = 0; i < n; i++) {
			if (theory.at(i) < menor) {
				menor = theory.at(i);
				indexLowest = i;
			} else if (theory.at(i) == menor) {
				if (practice.at(i) > practice.at(indexLowest)) {
					menor = theory.at(i);
					indexLowest = i;
				}
			}
		}

		total -= theory.at(indexLowest);
		total += practice.at(indexLowest);
	}

	cout << total << endl;

	return 0;
}