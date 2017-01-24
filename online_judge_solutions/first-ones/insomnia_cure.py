# coding: utf-8
# Maria Clara Dantas, UFCG
# insomnia_cure

k = int(raw_input())
l = int(raw_input())
m = int(raw_input())
n = int(raw_input())
d = int(raw_input())
dragoes_sofredores = []

menor = min(k, l, m, n)

if k != 1 and l != 1 and m != 1 and n != 1:
	for numero in xrange(menor, d + 1):
		if numero % k == 0 and (not (numero in dragoes_sofredores)) :
			dragoes_sofredores.append(numero)
		elif numero % l == 0 and (not (numero in dragoes_sofredores)):
			dragoes_sofredores.append(numero)
		elif numero % m == 0 and (not(numero in dragoes_sofredores)):
			dragoes_sofredores.append(numero)
		elif numero % n == 0 and (not(numero in dragoes_sofredores)):
			dragoes_sofredores.append(numero)
		
	print len(dragoes_sofredores) 

else:
	print d
