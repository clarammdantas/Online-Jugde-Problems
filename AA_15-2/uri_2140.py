# Troco - URI 2140
# Clara Moraes Dantas

while True:
	n, m = map(int, raw_input().split())

	if n == 0 and m == 0: break

	notas = [2, 5, 10, 20, 50, 100]
	troco = m - n

	possible = False
	for i in range(6):
		if not possible:
			for j in range(i + 1, 6):
				if notas[i] + notas[j] == troco:
					possible = True
					print "possible"
					break
		else: break

	if not possible: print "impossible"