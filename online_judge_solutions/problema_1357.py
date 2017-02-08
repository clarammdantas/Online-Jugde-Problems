#problema_1357
#URI

braille_dec = [[['*.'], ['..'],['..']], [['*.'], ['*.'], ['..']],
				[['**'], ['..'], ['..']], [['**'], ['.*'], ['..']],
				[['*.'], ['.*'], ['..']], [['**'], ['*.'], ['..']],
				[['**'], ['**'], ['..']], [['*.'], ['**'], ['..']],
				[['.*'], ['*.'], ['..']], [['.*'], ['**'], ['..']]]

while True:
	n = int(raw_input())
	
	if n == 0: break 
	
	traducao = raw_input()
	
	if traducao == 'S':
		dec = raw_input()
		for j in range(3):
			for i in range(n):
				indice = int(dec[i]) - 1
				if i + 1 < n:
					print str(braille_dec[indice][j][0]),
				else:
					print str(braille_dec[indice][j][0])
					
	elif traducao == 'B':
		numbers = [[[] for u in range(3)] for k in range(n)]
		for i in range(3):
			row = raw_input().split()
			for j in range(n):
				if i < 3:
					numbers[j][i].append(row[j])
				else:
					numbers[j][i % 3].append(row[j])
		num = ''
		for m in range(n):
			add = str(braille_dec.index(numbers[m]) + 1)
			if add == '10':
				num += '0'
			else:
				num += add
		print num
		
