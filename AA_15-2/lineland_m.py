#lineland mail codeforces

n = int(raw_input())

posicoes = map(int, raw_input().split())

for i in range(n):
	if i + 1 > n - 1:
		print abs(posicoes[i] - posicoes[i- 1]), abs(posicoes[i] - posicoes[0])
	
	elif i - 1 < 0:
		print abs(posicoes[i] - posicoes[i + 1]), abs(posicoes[i] - posicoes[n - 1])
		
	else:
		print min(abs(posicoes[i] - posicoes[i + 1]), abs(posicoes[i] - posicoes[i - 1])), max(abs(posicoes[i] - posicoes[n - 1]), abs(posicoes[i] - posicoes[0]))
		
