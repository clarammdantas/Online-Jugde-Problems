n = int(raw_input())

upperBound = int(2e9 - 1)
lowerBound = int(-2e9 + 1)
possible = True

for i in xrange(n):
	inst = raw_input().split()
	if inst[0] == ">=" and inst[2] == "Y":
		if int(inst[1]) > lowerBound:
			lowerBound = int(inst[1])

	elif inst[0] == ">=" and inst[2] == "N":
		if int(inst[1]) < upperBound:
			upperBound = int(inst[1]) - 1

	elif inst[0] == ">" and inst[2] == "Y":
		if int(inst[1]) >= lowerBound:
			lowerBound = int(inst[1]) + 1

		elif lowerBound == upperBound and int(inst[1]) == lowerBound:
			possible = False

	elif inst[0] == ">" and inst[2] == "N":
		if int(inst[1]) < upperBound:
			upperBound = int(inst[1])

	elif inst[0] == "<=" and inst[2] == "Y":
		if int(inst[1]) < upperBound:
			upperBound = int(inst[1])

	elif inst[0] == "<=" and inst[2] == "N":
		if int(inst[1]) > lowerBound:
			lowerBound = int(inst[1]) + 1

	elif inst[0] == "<" and inst[2] == "Y":
		if int(inst[1]) <= upperBound:
			upperBound = int(inst[1]) - 1

		elif lowerBound == upperBound and int(inst[1]) == upperBound:
			possible = False

	elif inst[0] == "<" and inst[2] == "N":
		if int(inst[1]) > lowerBound:
			lowerBound = int(inst[1])

if lowerBound <= upperBound and possible:
	print lowerBound

else:
	print "Impossible"