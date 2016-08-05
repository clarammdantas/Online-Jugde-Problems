# coding: utf-8
# Maria Clara Dantas, UFCG
# pashmak_and_flowers

qnt_flores = int(raw_input())
flores = map(int, raw_input().split())
maior = max(flores)
menor = min(flores)
max_diferenca = maior - menor
maximos = 0
minimos = 0

indices_flores_max_diferenca = []

if maior != menor:
	for i in range(qnt_flores):
		if flores[i] == maior:
			maximos += 1
		elif flores[i] == menor:
			minimos += 1
	possibilidades = maximos * minimos
else:
	possibilidades = sum(range(qnt_flores -1,0, -1)) 
print max_diferenca, possibilidades
