#marianne and the twins

vetozao = [0, 0, 0, 1, 1, 2, 2, 3]
maxValue = 1000000 + 1

isPrime = [False] * 2 + [True] * (maxValue - 1)

for i in xrange(int(maxValue**0.5 + 1.5)):
	if isPrime[i]:
		for j in xrange(i * 2, maxValue + 1, i):
			isPrime[j] = False

for i in xrange(8, maxValue):
	if isPrime[i] and isPrime[i + 2]:
		vetozao.append(vetozao[-1] + 1)
		
	elif isPrime[i] and isPrime[i - 2]:
		vetozao.append(vetozao[-1] + 1)
	
	else:
		vetozao.append(vetozao[-1])
		
	
n = int(raw_input())

for j in xrange(n):
	x, y = map(int, raw_input().split())
	
	maior = max(x, y)
	menor = min(x, y)
	
	result = vetozao[maior] - vetozao[menor - 1]
		
	print result
