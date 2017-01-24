# Domingo de Manha - URI 2003

while True:
	try:
		binoWoke = map(int, raw_input().split(":"))
		binoTime = binoWoke[0] * 60 + 60 + binoWoke[1]

		if binoTime <= 480: print "Atraso maximo: 0"
		else: print "Atraso maximo: %d" %(binoTime - 480)

	except: break