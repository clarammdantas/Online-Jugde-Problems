# coding: utf-8
# Maria Clara Dantas, UFCG
# ohana_cleans_up

tamanho_matriz = int(raw_input())
matriz = []

for i in range(tamanho_matriz):
	linha = raw_input()
	matriz.append(linha)
	
possibilidades = []
comparacoes = 0

for m in xrange(tamanho_matriz):
	iguais = 0
	for a in xrange(tamanho_matriz):
		if matriz[m] == matriz[a]:
			iguais += 1
	possibilidades.append(iguais)
	
print max(possibilidades)
