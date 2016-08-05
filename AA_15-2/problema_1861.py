#problema_1861
#import 

murders = {}
killed = {}
order = []

while True:
	try:
		murder, vict = raw_input().split()
		order.append(murder)
		if murders.get(murder) == None:
			murders[murder] = 1
		else:
			murders[murder] += 1
		
		if killed.get(vict) == None:
			killed[vict] = 1
			
	except EOFError:
		break 

order.sort()

for i in killed:
	if murders.get(i) != None:
		murders.pop(i)
		
print "HALL OF MURDERERS"
for i in order:
	if murders.get(i) != None:
		print i, murders[i]
		murders.pop(i)
