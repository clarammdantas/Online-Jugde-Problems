// Qual Triangulo URI - 2313

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool isTriangle(ll x, ll y, ll z) {
	if (x * x <= (y * y + z * z)) {
		if (y * y <= (x * x + z * z)) {
			if (z * z <= (x * x + y * y)) {
				return true;
			}
		}
	}

	return false;
}

bool isRectangle(ll a, ll b, ll c) {
	if (a >= b && a >= c && a * a == b * b + c * c) return true;
	else if (b >= c && b >= a && b * b == a * a + c * c) return true;
	else if (c >= a && c >= b && c * c == a * a + b * b) return true;

	return false;
}

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;

	bool canBeTriangle = isTriangle(a, b, c);
	if (!canBeTriangle) cout << "Invalido" << endl;

	else { 
		if (a == b && b == c) { cout << "Valido-Equilatero" << endl; cout << "Retangulo: N" << endl;}

		else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
			cout << "Valido-Isoceles" << endl;
			if (isRectangle(a, b, c)) cout << "Retangulo: S" << endl;
			else cout << "Retangulo: N" << endl;
		}

		else {
			cout << "Valido-Escaleno" << endl;
			if (isRectangle(a, b, c)) cout << "Retangulo: S" << endl;
			else cout << "Retangulo: N" << endl;
		}
	}


	return 0;
}