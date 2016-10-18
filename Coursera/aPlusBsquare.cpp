// Week 1 - Coursera - A + B^2

#ifdef JUDGE
#include <fstream>
std::ifstream cin("aplusbb.in");
std::ofstream cout("aplusbb.out");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;

	cout << a + b * b << endl;

	return 0;
}