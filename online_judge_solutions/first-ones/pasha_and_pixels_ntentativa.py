# coding: utf-8
# Maria Clara Dantas
# pasha_and_pixels

qnt_linhas, qnt_colunas, passos = map(int, raw_input().split())
quantos_passos = []
achou_solucao = True


for i in range(passos):
	l, c = map(int, raw_input().split())
	quantos_passos.append([l,c])

for x in range(passos - 1):
	comeco = x + 1
	fica_preta = 1
	for y in range(passos):
		dados = str(quantos_passos[y][0]) + str(quantos_passos[y][1])
		p_1 = quantos_passos[x][0] == quantos_passos[y][0] and quantos_passos[x][1] + 1 == quantos_passos[y][1]
		p_2 = quantos_passos[x][0] + 1 == quantos_passos[y][0] and quantos_passos[x][1] == quantos_passos[y][1]
		p_3 = quantos_passos[x][0] + 1 == quantos_passos[y][0] and quantos_passos[x][1] + 1 == quantos_passos[y][1]
		if p_1 or p_2 or p_3:
			fica_preta += 1
		if fica_preta == 4:
			print y + 1
			achou_solucao = False
			break
	if not achou_solucao:
		break
if achou_solucao:
	print '0'
