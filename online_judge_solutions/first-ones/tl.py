# coding: utf-8
# Maria Clara Dantas, UFCG
# time_limit

n, m = map(int, raw_input().split())
correct = map(int, raw_input().split())
wrong = map(int, raw_input().split())

v = max(correct)
if v > 1:
	valor_compara = v / 2
elif v < 2:
	valor_compara = v * 2
	v = v * 2
solucao = False

if n >= 2:
	for num in correct:
		if num <= valor_compara:
			solucao = True
			break
	if solucao:
		for nu in wrong:
			if nu <= v:
				solucao = False
			
		if solucao:
			print v
		else:
			print -1
	else:
		menor_wrong = min(wrong)
		solucao_menor = min(correct) * 2
		if solucao_menor < menor_wrong:
			print solucao_menor
		else:
			print -1
	
if n == 1:
	valor_compara = correct[0] * 2
	solucao = True
	for k in wrong:
		if k <= valor_compara:
			solucao = False
			break
	if solucao:
		print valor_compara
	else:
		menor_wrong = min(wrong)
		solucao_menor = min(correct) * 2
		if solucao_menor < menor_wrong:
			print solucao_menor
		else:
			print -1
	

