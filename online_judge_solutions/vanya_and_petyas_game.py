#vanya_and_petyas_game

maxValue = 1000 + 1

isPrime = [False] * 2 + [True] * (maxValue - 1)

for i in xrange(int(maxValue**0.5 + 1.5)):
	if isPrime[i]:
		for j in xrange(i * 2, maxValue + 1, i):
			isPrime[j] = False
			
result = []
n = int(raw_input())

for t in isPrime:
	if t < n: break
	
	result.append(t)
	k = 2
	while n >= t ** k:
		result.append(t**k)
		k += 1
			
print len(result)

for i in range(len(result) - 1):
	print result[i],
