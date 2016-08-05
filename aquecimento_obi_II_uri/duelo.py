# coding: utf-8
# Maria Clara Dantas
# duelo

qnt_cartas, h1, h2, h3 = map(int, raw_input().split())

informacoes_cartas = [[0 for i in range(3)]for j in range(qnt_cartas)]

for j in range(qnt_cartas):
	informacoes_cartas[j] = map(int, raw_input().split())

n_entrou_no_for = True
for k in range(qnt_cartas - 1):
	for x in range(1, qnt_cartas):
		if (informacoes_cartas[k][0] + informacoes_cartas[x][0] == h1) and (informacoes_cartas[k][1] + informacoes_cartas[x][1] == h2):
			if informacoes_cartas[k][2] + informacoes_cartas[x][2] == h3:
				n_entrou_no_for = False
				print 'Y'
				break
if n_entrou_no_for:
	print 'N'
	
