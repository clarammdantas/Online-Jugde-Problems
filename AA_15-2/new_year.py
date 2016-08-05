#new_year

b = '1'
numeros = []

while len(b) <= 62:
	for i in range(1, len(b) - 1):
		numeros.append(int(b[:i] + '0' + b[i + 1:], 2))
		
	numeros.append(int(b[:len(b) - 1] + '0' , 2))
	b += '1'
	
numeros.sort()

a,b = map(int, raw_input().split())
comeco = 0
meher_eins = False

for i in xrange(len(numeros) - 1):
	if numeros[i] == a:
		comeco = i - 1
		break 
		
	elif numeros[i+ 1] == a:
		comeco = i
		break 
		
	elif numeros[i] < a and numeros[i + 1] > a:
		comeco = i
		break 
		
fim = comeco

for i in xrange(comeco, len(numeros) - 1):
	if numeros[i] == b:
		fim = i
		break 
		
	elif numeros[i + 1] == b:
		fim = i + 1
		break
			
	elif numeros[i] < b and numeros[i + 1] > b:
		fim = i
		break 

resultado = fim

if comeco >= 0:
	resultado -= comeco

if numeros[comeco] < a and numeros[fim] > b:
	resultado = 0
elif comeco == fim and (numeros[comeco] != a and numeros[comeco] != b):
	resultado = 0
	
print resultado
