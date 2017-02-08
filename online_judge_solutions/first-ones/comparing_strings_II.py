# coding: utf-8
# Maria Clara Dantas, UFCG
# comparing_strings_II

s1 = raw_input()
s2 = raw_input()

if len(s1) != len(s2):
    print 'NO'
else:
	indice = []
	diferente = 0
	for i in range(len(s2)):
		if s1[i] != s2[i]:
			diferente += 1
			indice.append(i)
		if diferente > 2:
			print 'NO'
			break
	if diferente == 2:
		p1 = s1[indice[0]] + s1[indice[1]]
		p2 = s2[indice[1]] + s2[indice[0]]
		if p1 == p2:
			print 'YES'
		elif p1 != p2:
			print 'NO'
	if diferente < 2:
		print 'NO'
