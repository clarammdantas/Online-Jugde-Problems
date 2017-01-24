#uri - 1025

tests = 0

while True:
	tests += 1
	qu = []
	n, q = map(int, raw_input().split())
	
	if q == 0 and n == 0: break
	
	positions = {}
	
	for i in range(n):
		number = int(raw_input())
		if positions.get(number) == None:
			positions[number] = [i + 2]
		else:
			positions[number].append(i + 2)
	
	
	for j in range(q):
		query = int(raw_input())
		qu.append(query)
	
	print "CASE# %d" %tests
	for j in range(q):
		if positions.get(qu[j]) != None and positions[qu[j]] != []:
			print "%d found at %d" %(qu[j], positions[qu[j]][0])
			if positions[qu[j]] != []:
				positions[qu[j]].pop(0) 
		else:
			print "%d not found" %qu[j]
