#soma_alg - uri

def somas(x):
	if len(x) == 1: return int(x)
	
	while len(x) > 1:
		soma = 0
		for i in range(len(x)):
			soma += int(x[i])
		x = str(soma) 
	return soma

while True:
	x, y = raw_input().split()
	
	if x == '0' and y == '0': break
	
	x = somas(x)       
	y = somas(y)
	
	if x > y: print 1
	elif x == y: print 0
	else:  print 2
