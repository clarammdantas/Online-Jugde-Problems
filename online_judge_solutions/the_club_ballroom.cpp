//the club ballroom - uri

#include <iostream>
#include <vector>
#include <algorithm>

#define maximo 10000000
#define min(a, b) (((a)<(b))?(a):(b))

using namespace std;

int resposta(int altura, int falta_bordas, vector <int>& bordas) {
	int comeco, fim, bordas_verticais, bordas_usadas;
	comeco = 0;
	fim = bordas.size() - 1;
	bordas_verticais = 0;
	bordas_usadas = 0;
	
	while (true) {
		if (bordas_verticais == falta_bordas) break;
		if (comeco > fim) return maximo;
		
		if (bordas[comeco] > altura) {
			comeco++;
		} else if (bordas[comeco] == altura) {
			comeco++;
			bordas_verticais++;
			bordas_usadas++;
		} else {
			if (comeco != fim) {
				while (true) {
					if (bordas[comeco] + bordas[fim] == altura) {
						fim--;
						bordas_verticais++;
						bordas_usadas += 2;
						break;
					}
					if (bordas[comeco] + bordas[fim] > altura) {
						break;
					}
					fim--;
				}
			}
			comeco++;
		}
	}
	return bordas_usadas;
}

int main(){
	int m, n, l, k, aj;
	int res1, res2;
	vector <int> bordas;
	
	while (true) {
		cin >> m >> n;
		
		if (m == 0 and n == 0) break;
		bordas.clear();
		
		cin >> l;
		cin >> k;
		
		for (int i = 0; i < k; i++) {
			cin >> aj;
			bordas.push_back(aj);
		}
		sort(bordas.begin(), bordas.end(), greater<int>());
		
		res1 = maximo;
		res2 = maximo;
		
		if ((n * 100) % l == 0)
			res1 = resposta(m, n * 100 / l, bordas);
		if ((m * 100) % l == 0)
			res2 = resposta(n, m * 100 / l, bordas);
			
		if ((res1 == 0 and res2 == 0) or (res1 == maximo and res2 == maximo))
			cout << "impossivel" << endl;
		else
			cout << min(res1, res2) << endl;
		}
		
		return 0;
	}
