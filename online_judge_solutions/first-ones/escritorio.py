# coding: utf-8
# Maria Clara Dantas
# escritorio

rep = int(raw_input())

for i in xrange(rep):
	portas = int(raw_input())
	if portas % 3 == 1:
		print portas
	elif portas % 3 == 2:
		if portas % 2 == 0:
			portasabertas = portas / 2
			print portasabertas
		else:
			print (portas / 2 + 1)
	elif portas % 3 == 0:
		if portas % 2 == 0:
			portasabertas = (portas / 2) - (portas / 3 - portas / 6) + portas / 6
			print portasabertas
		else:
			portasabertas = (portas / 2 + 1) - (portas / 3 - portas / 6) + portas / 6
			print portasabertas


