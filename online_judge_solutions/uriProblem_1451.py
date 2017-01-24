# uri problem 1451
# broken keyboard

while True:
	try:
		phrase = raw_input()
		new = ""
		home = False
		len_phrase = len(phrase)
		new_phrase = ""
		
		for i in range(len_phrase):
			if phrase[i] == "[":
				new_phrase = new + new_phrase
				home = True
				new = ""
				continue
				
			if phrase[i] == "]":
				new_phrase = new + new_phrase
				new = ""
				home = False
				continue
			
			if home:
				new += phrase[i]
				
			else:
				new_phrase += phrase[i]
		
		new_phrase = new + new_phrase
		
		print new_phrase
		
	except: break 
