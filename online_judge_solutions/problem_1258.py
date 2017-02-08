#problem_1258

control = []

while True:
	n = int(raw_input())
	
	if n == 0: break 

	blusas = ['branco P', 'branco M', 'branco G',
			  'vermelho P', 'vermelho M', 'vermelho G']
				  
	pedido = {}
		
	for i in range(n):
		pessoa = raw_input()
		tipo_blusa = raw_input()
			
		if pedido.get(tipo_blusa) == None:
			pedido[tipo_blusa] = [pessoa]
		else:
			pedido[tipo_blusa].append(pessoa)
	
	p = []
	for j in blusas:
		if pedido.get(j) != None:
			pedido[j].sort()
			for k in pedido[j]:
				p.append(j)
				p.append(k)
	if p != []:
		control.append(p)
			
for i in range(len(control)):
	for j in range(0, len(control[i]) - 1, 2):
		print control[i][j], control[i][j+1]

	if i < len(control) - 1:
		print 
