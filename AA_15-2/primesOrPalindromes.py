#primes or palindromes

p, q = map(int, raw_input().split())
MAX = 2000000

a = float(p) / q
primes = [False, False, True] + [True] * (MAX - 3) 
palinds = [0, 1]

p = 0
p2 = 1
ans = 1
for i in range(2, MAX):
	if primes[i] == True:
		p += 1
		for j in range(i * i, MAX, i):
			primes[j] = False
	
	if str(i) == str(i)[::-1]:
		p2 += 1
	
	if p <= p2 * a:
		ans = i

print ans
