#renzo_and_the_palindromic_decoration
#problem 1880

def changeBase(numero, base):
	result = ''
	maiores_10 = {10:'A', 11:'B', 12:'C', 13:'D', 14:'E', 15:'F'}

	while numero / base > 0:
		if numero % base >= 10:
			result = str(maiores_10[numero % base]) + result
		else:
			result = str(numero % base) + result
		numero /= base
	
	if numero % base >= 10:
		result = str(maiores_10[numero % base]) + result
	else:
		result = str(numero % base) + result
	
	return result

n = int(raw_input())

for i in range(n):
	numero = int(raw_input())
	result = ''
	
	for b in range(2, 17):
		basedChange = changeBase(numero, b)
		t = len(basedChange)
		
		if t % 2 == 0:
			if basedChange == basedChange[t - 1::-1]:
				result += ' ' + str(b)
		else:
			if basedChange == basedChange[t - 1::-1]:
				result += ' ' + str(b)
	
	if result == '':
		print -1
	else:
		print result[1:]
