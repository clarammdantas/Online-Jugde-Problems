# Giga Tower - Codeforces Div 2A - 278
# Clara Moraes Dantas

n = raw_input()

if -9 > int(n) or int(n) > 9:
	if n[-2] == '7' and n[-1] == '9':
		print 1

	elif n[0] == '-':
		print 8 + int(n[-1])

	else:
		print 8 - int(n[-1])

else:
	if n[0] == '-':
		print 8 + int(n[-1])

	else:
		print 8 - int(n[-1])
