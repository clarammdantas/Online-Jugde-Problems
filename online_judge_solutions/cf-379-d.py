# Codeforces - Div 2 D - 379
# Clara Moraes Dantas

n = int(raw_input())

xo, yo = map(int, raw_input().split())

positions = {}

for i in range(n):
	piece = raw_input().split()
	p = piece[0]
	x = int(piece[1])
	y = int(piece[2])

	if positions.get(p) == None:
		positions[p] = [(x, y)]

	else:
		positions[p].append((x, y))

check = False
if positions.get('R') != None:
	for pair in positions['R']:
		if pair[0] == xo or pair[1] == yo:
			print "YES"
			check = True

possibleB = []
if positions.get('B') != None and not check:
	for pair in positions['B']:
		if abs(xo - pair[0]) == abs(yo - pair[1]):
			possibleB.append((pair[0], pair[1]))

possibleQ = []
if positions.get('Q') != None and not check:
	for pair in positions['Q']:
		if abs(xo - pair[0]) == abs(yo - pair[1]) or pair[0] == xo or pair[1] == yo:
			possible.append(((pair[0], pair[1])))

for i in range(len(possibleB)):
	if positions.get('R') != None and positions.get('Q') != None:
		if i not in positions['R'] and i not in positions['Q']:
			print "YES"
			check = True
			break

	elif positions.get('R') != None:
		if i not in positions['R']:
			print "YES"
			check = True
			break

	elif positions.get('Q') != None:
		if i not in positions['Q']:
			print "YES"
			check = True
			break

if not check:
	for i in range(len(possibleQ)):
		if positions.get('R') != None and positions.get('B') != None:
			if i not in positions['R'] and i not in positions['B']:
				print "YES"
				check = True
				break

		elif positions.get('R') != None:
			if i not in positions['R']:
				print "YES"
				check = True
				break

		elif positions.get('B') != None:
			if i not in positions['B']:
				print "YES"
				check = True
				break

