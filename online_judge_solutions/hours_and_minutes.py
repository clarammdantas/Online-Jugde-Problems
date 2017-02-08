#hours and minutes - uri

while True:
	try:
		n = int(raw_input())
		
		if n % 6 == 0:
			print 'Y'
		else:
			print 'N'
	
	except: break 
