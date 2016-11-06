# Sequencia de Sequencia - URI 2028
# Clara Moraes Dantas

seq = [1, 2, 4]

for i in range(3, 201):
	seq.append((seq[i-1] + i))

case = 1

while True:
	try:
		j = int(raw_input())

		if j == 0:
			print "Caso %d: 1 numero" %case

		else:
			print "Caso %d: %d numeros" %(case, seq[j])

		for i in range(j + 1):
			if i == 0 and j > 0:
				print 0, 
			elif i == 0 and j == 0:
				print 0

			k = 0
			while k < i:
				if k == i - 1 and k == j - 1:
					print i

				else:
					print i,

				k += 1

		print

		case += 1

	except: break