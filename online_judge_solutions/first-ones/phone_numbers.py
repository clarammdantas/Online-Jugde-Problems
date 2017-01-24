# coding: utf-8
# Maria Clara Dantas, UFCG
# phone_numbers

qntd_amigos = int(raw_input())

lista_telefonica = [[0 for j in range(qntd_amigos)] for i in range(3)]
amigo_correspondente = []

for j in range(qntd_amigos):
	telefones_amigo = raw_input().split()
	amigo_correspondente.append(telefones_amigo[1])
	taxi_a = 0
	pizza_a = 0
	garotas_a = 0
	for m in range(int(telefones_amigo[0])):
		tel = raw_input().split('-')
		telefone = ''
		for k in range(3):
			telefone += tel[k]
		numeros = set(telefone)
		if len(numeros) == 1:
			taxi_a += 1
		elif len(numeros) == 6 and (int(telefone[0]) > int(telefone[1]) > int(telefone[2]) > int(telefone[3]) > int(telefone[4]) > int(telefone[5])):
			pizza_a += 1
		else:
			garotas_a += 1
	lista_telefonica[0][j] = taxi_a
	lista_telefonica[1][j] = pizza_a
	lista_telefonica[2][j] = garotas_a
indices = [[] for i in range(3)]
for i in range(3):
	maior = max(lista_telefonica[i])
	for j in range(qntd_amigos):
		if lista_telefonica[i][j] == maior:
			indices[i].append(j)
taxi = ''
pizza = ''
garotas = ''

for i in range(3):
	for j in range(len(indices[i])):
		if i == 0:
			if j < len(indices[i]) - 1:
				taxi += amigo_correspondente[indices[i][j]] + ', '
			else:
				taxi += amigo_correspondente[indices[i][j]] + '.'
		elif i == 1:
			if j < len(indices[i]) - 1:
				pizza += amigo_correspondente[indices[i][j]] + ', '
			else:
				pizza += amigo_correspondente[indices[i][j]] + '.'
		else:
			if j < len(indices[i]) - 1:
				garotas += amigo_correspondente[indices[i][j]] + ', '
			else:
				garotas += amigo_correspondente[indices[i][j]] + '.'

print 'If you want to call a taxi, you should call: %s' % taxi
print 'If you want to order a pizza, you should call: %s' % pizza
print 'If you want to go to a cafe with a wonderful girl, you should call: %s' % garotas
