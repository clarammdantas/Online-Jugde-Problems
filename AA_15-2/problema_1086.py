#problema_1086

while True:
	try:
		expression = raw_input()
		control = 0
		
		for i in expression:
			if i == '(':
				control += 1
			elif i == ')':
				control -= 1
			if control < 0:
				print "incorrect"
				break 
		if control == 0:
			print "correct"
		elif control > 0:
			print "incorrect"
		
	except: break 
