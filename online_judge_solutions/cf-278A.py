# Codeforces - Giga Tower - div 2 A - 278
# Clara Moraes Dantas

n = int(raw_input())

ans = 0
notFound = True

while notFound:
	ans += 1
	n += 1

	for i in str(n):
		if i == '8':
			print ans
			notFound = False
			break
	
