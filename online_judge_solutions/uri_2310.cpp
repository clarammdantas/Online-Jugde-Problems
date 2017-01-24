// Voleibol - URI 2310

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double totalS = 0, totalB = 0, totalA = 0, madeS = 0, madeB = 0, madeA = 0;

	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;

		double tS, tB, tA;
		cin >> tS >> tB >> tA;
		totalA += tA;
		totalB += tB;
		totalS += tS;

		double mS, mB, mA;
		cin >> mS >> mB >> mA;
		madeB += mB;
		madeA += mA;
		madeS += mS;
	}

	printf("Pontos de Saque: %.2f %%.\n", (madeS * 100 / totalS));
	printf("Pontos de Bloqueio: %.2f %%.\n", (madeB * 100 / totalB));
	printf("Pontos de Ataque: %.2f %%.\n", (madeA * 100 / totalA));
}