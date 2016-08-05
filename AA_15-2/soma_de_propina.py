#soma de propina - uri

cpf = raw_input()
valor = raw_input()

numeros = "1234567890"
n_cpf = 0
n_ponto = 0
ponto = False
soma_1 = ""
soma_2 = ""

cpf_valido = ""


for i in cpf:
	if i in numeros and n_cpf < 11:
		cpf_valido += i
		n_cpf += 1
		
	elif i == '.':
		soma_1 += '.'
		ponto = True
		
	elif i in numeros and ponto and n_ponto < 2:
		n_ponto += 1
		soma_1 += i
	
	elif i in numeros and n_ponto < 2:
		soma_1 += i

ponto = False
n_ponto = 0

for j in valor:
	if j in numeros and not ponto and n_ponto < 2:
		soma_2 += j
		
	elif j == '.':
		soma_2 += '.'
		ponto = True
	
	elif j in numeros and n_ponto < 2 and ponto:
		soma_2 += j
		n_ponto += 1

total = float(soma_1) + float(soma_2)
	
print "cpf " + cpf_valido
print "%.2f" % total
