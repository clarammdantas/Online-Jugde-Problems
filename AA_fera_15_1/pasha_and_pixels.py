# coding: utf-8
# Maria Clara Dantas
# pasha_and_pixels

qnt_linhas, qnt_colunas, passos = map(int, raw_input().split())
quantos_passos = []
achou_solucao = True


for i in range(passos):
	l, c = map(int, raw_input().split())
	quantos_passos.append([l,c])

for x in range(passos):
	c_preta = 1
	ja_esta_preta = []
	for y in range(passos):
		if quantos_passos[y] in quantos_passos[:y]:
			print quantos_passos[y]
			pass
		else:
			ja_esta_preta.append(quantos_passos[y])
			p_1 = (quantos_passos[x][0] == quantos_passos[y][0] and quantos_passos[x][1] + 1 == quantos_passos[y][1])
			p_2 = (quantos_passos[x][0] + 1 == quantos_passos[y][0] and quantos_passos[x][1] == quantos_passos[y][1])
			p_3 = (quantos_passos[x][0] + 1 == quantos_passos[y][0] and quantos_passos[x][1] + 1 == quantos_passos[y][1])
			if p_1 or p_2 or p_3:
				c_preta += 1
			if c_preta == 4:
				print y + 1
				achou_solucao = False
				break
	if not achou_solucao:
		break
if achou_solucao:
	print '0'
		
		
		
		#if quantos_passos[x][0] == quantos_passos[y][0] and quantos_passos[x][1] + 1 == quantos_passos[y][1]:
		#	c_preta += 1
		#	celulas_ja_pretas += str(quantos_passos[y])
			
		#elif 
