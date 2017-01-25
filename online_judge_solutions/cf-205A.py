# Domino - Codeforces 205 div 2 - A
# Clara Moraes Dantas

n = int(raw_input())

dominos = []

even = 0
odd = 0
upperEven = 0
lowerEven = 0

for i in range(n):
	x, y = map(int, raw_input().split())

	dominos.append((x, y))

	if x % 2 == 0:
		even += 1
		upperEven += 1

	else:
		odd += 1

	if y % 2 == 0:
		even += 1
		lowerEven += 1

	else: 
		odd += 1

if (even != odd and odd > 0) or (len(dominos) == 1 and even == odd):
	print -1

elif even != odd and odd == 0:
	print 0

else:
	print min(upperEven, lowerEven)



