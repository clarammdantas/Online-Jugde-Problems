# coding: utf-8
# Maria Clara Dantas
# mosquitos

qnt_mosquitos = int(raw_input())
coordenadas = map(int, raw_input().split())
maior_x = coordenadas[0]
maior_y = coordenadas[1]
menor_x = coordenadas[0]
menor_y = coordenadas[1]

for i in xrange(qnt_mosquitos -1):
	coordenadas = map(int, raw_input().split())
	if coordenadas[0] > maior_x:
		maior_x = coordenadas[0]
	elif coordenadas[0] < menor_x:
		menor_x = coordenadas[0]
	if coordenadas[1] > maior_y:
		maior_y = coordenadas[1]
	elif coordenadas[1] < menor_y:
		menor_y = coordenadas[1]

diferenca_x = maior_x - menor_x
diferenca_y = maior_y - menor_y

if diferenca_x <= diferenca_y:
	print diferenca_y ** 2
elif diferenca_x > diferenca_y:
	print diferenca_x ** 2
