# coding: utf-8
# Maria Clara Dantas
# imas

palavras = []
while True:
	entrada = raw_input()
	if entrada == 'FIM': break
	
	else:
		repete = True
		letras = { 'A':0, 'B':0, 'C':0, 'D':0, 'E':0, 'F':0, 'G':0, 'H':0, 'I':0,
				   'J':0, 'K':0, 'L':0, 'M':0, 'N':0, 'O':0, 'P':0, 'Q':0, 'R':0,
				   'S':0, 'T':0, 'U':0, 'V':0, 'X':0, 'Z':0, 'W':0, 'Y':0 }
		
		for letra in entrada:
			if letra != ' ':
				letras[letra] += 1
				if letras[letra] > 1:
					repete = False
					break
				
		if repete:
			palavras.append(entrada)

for i in palavras:
	print i
