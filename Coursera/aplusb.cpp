// Week 1 - Problem A + B

#ifdef JUDGE
#include <fstream>
std::ifstream cin("aplusb.in");
std::ofstream cout("aplusb.out");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;

	cout << a + b << endl;

	return 0;
}