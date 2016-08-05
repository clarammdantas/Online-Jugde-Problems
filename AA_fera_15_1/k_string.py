# coding: utf-8
# Maria Clara Dantas, UFCG
# k_string

k = int(raw_input())
palavra = raw_input()

letras = {'a':0, 'b':0, 'c':0, 'd':0, 'e':0, 'f':0, 'g':0,
          'h':0, 'i':0, 'j':0, 'k':0, 'l':0, 'm':0, 'n':0,
          'o':0, 'p':0, 'q':0, 'r':0, 's':0, 't':0, 'u':0,
          'v':0, 'x':0, 'z':0, 'w':0, 'y':0 }
          
if k == 1:
	print palavra

elif len(palavra) % k != 0:
	print '-1'

else:
	divisible = True
	for i in range(len(palavra)):
		letras[palavra[i]] += 1
	usadas = ''
	for le in palavra:
		if le not in usadas:
			usadas += le
	for let in usadas:
		if letras[let] % k != 0:
			divisible = False
			break
	if divisible:
		nova_palavra = ''
		for l in usadas:
			nova_silaba = (letras[l] / k) * l
			nova_palavra += nova_silaba
		print nova_palavra * k
	else:
		print '-1'
		    
