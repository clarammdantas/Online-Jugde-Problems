#include <bits/stdc++.h>

// CodeForces Lineland Mail

using namespace std;

int main()
{
	int numCidades;
	cin >> numCidades;
		
	int PosicoesCidades[numCidades];
		
	for (int i = 0; i < numCidades; i += 1)
	{
		int posicao;
		cin >> posicao;
			
		PosicoesCidades[i] = posicao;
			
	}
		
	for (int j = 0; j < numCidades; j += 1)
	{
		int p_maior;
		int p_menor;
			
		// se a cidade nao esta em nenhuma extremidade
		if (j != 0 && j != numCidades)
		{
			// maior distancia
			int p_menor_1 = abs(PosicoesCidades[j] - PosicoesCidades[j + 1]);
			int p_menor_2 = abs(PosicoesCidades[j] - PosicoesCidades[j - 1]);
				
			if (p_menor_1 >= p_menor_2)
			{
				p_menor = p_menor_2;
			}
			else
			{
				p_menor = p_menor_1;
			}
				
			// menor distancia
			int p_maior_1 = abs(PosicoesCidades[j] - PosicoesCidades[numCidades - 1]);
			int p_maior_2 = abs(PosicoesCidades[j] - PosicoesCidades[0]);
				
			if (p_maior_1 >= p_maior_2)
			{
				p_maior = p_maior_1;
			}
				
			else
			{
				p_maior = p_maior_2;
			}
		}
			
		// se a cidade estiver em alguma extremidade
		else
		{
			p_maior = abs(PosicoesCidades[j] - PosicoesCidades[numCidades - 1]);
			if (PosicoesCidades[0])
			{
				p_menor = abs(PosicoesCidades[j] - PosicoesCidades[j + 1]);
			}
			else
			{
				p_menor = abs(PosicoesCidades[j] - PosicoesCidades[j - 1]);
			}
		}
		
		cout << p_menor << " " << p_maior << endl;
			
		}
		return 0;
	}
