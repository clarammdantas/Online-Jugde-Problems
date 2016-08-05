# coding: utf-8
# Maria Clara Dantas
# Jogo_de_cartas

n_cartas, c_mesa, limite = map(int, raw_input().split())

pontuacao = {'a':0 , 'b':0}

for i in range(n_cartas - 1):
	carta = int(raw_input())
	if i % 2 == 0 and abs(carta - c_mesa) <= limite:
		pontuacao['a'] += abs(carta - c_mesa)
		c_mesa = carta
	elif i % 2 != 0 and abs(carta - c_mesa) <= limite:
		pontuacao['b'] += abs(carta - c_mesa)
		c_mesa = carta

print pontuacao['a'], pontuacao['b']
