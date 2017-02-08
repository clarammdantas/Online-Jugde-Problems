# coding: utf-8
# Maria Clara Dantas, UFCG
# amusing_joke_II

remetente = raw_input()
destinatario = raw_input()
embaralhado = raw_input()

if len(remetente) + len(destinatario) != len(embaralhado):
	print 'NO'
else:
	def find(str, ch):
		indice = 0
		while indice < len(str):
			if str[indice] == ch:
				return indice
			indice += 1
		return -1
		
	for i in range(len(remetente)):
		if remetente[i] in embaralhado:
			m = find(embaralhado, remetente[i])
			embaralhado = embaralhado[ : m] + embaralhado[m + 1: ]
	for k in range(len(destinatario)):
		if destinatario[k] in embaralhado:
			indice = find(embaralhado, destinatario[k])
			embaralhado = embaralhado[ :indice] + embaralhado[indice + 1: ]
	if len(embaralhado) == 0:
		print 'YES'
	else:
		print 'NO'
