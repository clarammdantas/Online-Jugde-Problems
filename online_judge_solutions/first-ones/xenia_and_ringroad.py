# coding: utf-8
# Maria Clara Dantas, UFCG
# xenia_and_ringroad

n, m = map(int, raw_input().split())
atividades_casas = map(int, raw_input().split())

tempo = 0
posicao = 1

for i in range(len(atividades_casas)):
	if posicao < atividades_casas[i]:
		tempo += (atividades_casas[i] - posicao)
	elif posicao > atividades_casas[i]:
		tempo += (n - posicao + atividades_casas[i])
	posicao = atividades_casas[i]
print tempo
		
		
