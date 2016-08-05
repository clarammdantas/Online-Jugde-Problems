#diferent_digits
while True:
	try:
		n1, n2 = map(int,raw_input().split())
		n_casas = n2 - n1 + 1
		n = 0
		for i in range(n1, n2 + 1):
			c = str(i)
			c_nrep = set(c)
			if len(c) != len(c_nrep):
				n += 1
				
		print n_casas - n
	except: break
