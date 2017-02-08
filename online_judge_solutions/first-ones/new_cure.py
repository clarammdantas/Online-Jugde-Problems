# coding: utf-8
# new_cure

numeros = []
for i in range(4):
	num = int(raw_input())
	numeros.append(num)

d = int(raw_input())
div = []
monstros_sofridos = 0

if numeros[0] != 1 and numeros[1] != 1 and numeros[2] != 1 and numeros[3] != 1:
	for indice in range(4):
		valor = numeros[indice]
		while numeros[indice] <= d:
			if numeros[indice] not in div:
				monstros_sofridos += 1
				div.append(numeros[indice])
				numeros[indice] += valor
			elif numeros[indice] in div:
				numeros[indice] += valor
			else:
				break
	print monstros_sofridos
else:
	print d
