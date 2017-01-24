# coding: utf-8
# Maria Clara Dantas, UFCG
# amusing_joke

remetente = raw_input()
destinatario = raw_input()
embaralhado = raw_input()

if len(remetente) + len(destinatario) != len(embaralhado):
	print 'NO'
else:
	tamanho = len(embaralhado)
	junto = remetente + destinatario
	for i in range(tamanho):
		for m in range(len(embaralhado)):
			if embaralhado[m] in junto:
				if m < tamanho - 2:
					embaralhado = embaralhado[: m] + embaralhado[m + 1:]
				else:
					embaralhado = embaralhado[:m]
	
	if len(embaralhado) == 0:
		print 'YES'
	else:
		print 'NO'
