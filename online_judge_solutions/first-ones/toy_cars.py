# coding: utf-8
# Maria Clara Dantas, UFCG
# toy_cars

tamanho_matriz = int(raw_input())
matriz = []

for i in range(tamanho_matriz):
	linha = raw_input().split()
	matriz.append(linha)

viradas_carros = [0 for i in range(tamanho_matriz)]
entrou_no_for = 0
if tamanho_matriz > 1:
	for l in range(tamanho_matriz):
		for c in range(tamanho_matriz):
			if matriz[l][c] == '1':
				viradas_carros[l] += 1
				entrou_no_for += 1
			elif matriz[l][c] == '2':
				viradas_carros[c] += 1
				entrou_no_for += 1
			elif matriz[l][c] == '3':
				viradas_carros[l] = (viradas_carros[l] - viradas_carros[l]) + 1
				viradas_carros[c] = (viradas_carros[c] - viradas_carros[c]) + 1
				entrou_no_for += 1
			elif matriz[l][c] == '0':
				entrou_no_for += 1		
	if entrou_no_for > 0:
		indices_ordenados = []
		for m in range(len(viradas_carros)):
			if viradas_carros[m] == 0:
				indices_ordenados.append(m + 1)
		print len(indices_ordenados)
		formatacao = ''
		for indice in range(len(indices_ordenados)):
			if indice < (len(indices_ordenados) - 1):
				formatacao += str(indices_ordenados[indice]) + ' '
			else:
				formatacao += str(indices_ordenados[indice])
		print formatacao
	elif entrou_no_for == 0:
		print '0'
else:
	print '1'
	print '1'
