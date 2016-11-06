// Week 1 - Coursera - Put the Chairs the Right Way!
// Clara Moraes Dantas

#ifdef JUDGE
#include <fstream>
std::ifstream cin("chairs.in");
std::ofstream cout("chairs.out");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	double result = (a / 2.0 + b / 2.0 + c / 2.0) / 3.0;
	cout << fixed << setprecision(10) << result << endl;

	return 0;
}