klein = raw_input()
gross = raw_input()

zahl = []

if gross[0] == '0':
	zahl.append((1,0))
else:
	zahl.append((0,1))
	
for i in range(1,len(gross)):
	if gross[i] == '0':
		zahl.append((zahl[i - 1][0] + 1, zahl[i - 1][1]))
	else:
		zahl.append((zahl[i - 1][0], zahl[i - 1][1] + 1))

plus = 0	
for i in range(len(klein)):
	if klein[i] == '0':
		plus += zahl[len(gross) - len(klein) + i][1]
		if i > 0:
			plus -= zahl[i - 1][1]
	else:
		plus += zahl[len(gross) - len(klein) + i][0]
		if i > 0:
			plus -= zahl[i - 1][0]

print plus
