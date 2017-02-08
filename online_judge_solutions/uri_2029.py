# Abelhas - URI 2029

while True:
	try:
		v = float(raw_input())
		d = float(raw_input())
		r = d / 2

		area = 3.14 * (r * r)
		h = v / area

		print "ALTURA = %.2f" %h
		print "AREA = %.2f" %area

	except: break