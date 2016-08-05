#revisao de contrato - uri

while True:
	branco, valor = raw_input().split()
	
	if branco == '0' and valor == '0': break 
	
	valor_real = ""
	
	for i in valor:
		if i != branco:
			valor_real += i
	
	if valor_real != "":
		print int(valor_real)
	
	else:
		print 0
