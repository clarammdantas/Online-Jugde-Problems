# coding: utf-8
# Maria Clara Dantas, UFCG
# face

n, m = map(int, raw_input().split())
matriz = []

for line in range(n):
	linha = raw_input()
	matriz.append(linha)

qnt_rostos = 0
for i in range(n - 1):
	for c in range(m - 1):
		teste = matriz[i][c] + matriz[i][c +1] + matriz[i + 1][c] + matriz[i + 1][c + 1]
		f = 0
		a = 0
		c = 0
		e = 0
		if not ('x' in teste):
			for letra in teste:
				if letra == 'f':
					f += 1
				elif letra == 'a':
					a += 1
				elif letra == 'c':
					c += 1
				elif letra == 'e':
					e += 1
		if f == 1 and a == 1 and c == 1 and e == 1:
			qnt_rostos += 1
print qnt_rostos
