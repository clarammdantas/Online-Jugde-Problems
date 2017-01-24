# coding: utf-8
# Maria Clara Dantas, UFCG
# valuable_resources

mines = int(raw_input())
x, y = map(int, raw_input().split())
maior_x = x
menor_x = x
maior_y = y
menor_y = y
for m in range(mines-1):
	x, y = map(int, raw_input().split())
	if x > maior_x:
		maior_x = x
	elif x < menor_x:
		menor_x = x
	if y > maior_y:
		maior_y = y
	elif y < menor_y:
		menor_y = y
tamanho_x = maior_x - menor_x
tamanho_y = maior_y - menor_y

area = (max(tamanho_x, tamanho_y)) ** 2
print area
