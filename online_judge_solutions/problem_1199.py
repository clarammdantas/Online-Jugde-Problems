#problem_1199

while True:
	numero = raw_input()
	
	if numero[:2] != "0x":
		if int(numero) < 0: break 
		number_str = str(hex(int(numero)))[2:]
		number_converted = "0x"
		
		for letter in number_str:
			if letter.isalpha():
				number_converted += letter.upper()
			else:
				number_converted += letter
				
		print number_converted
		
	else:
		decimal = int(numero, 16)
		print decimal
