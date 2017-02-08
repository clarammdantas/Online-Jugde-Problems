#Codeforeces - div2 round 372 B

import string

in_word = {}
alphabet = string.ascii_uppercase

for l in alphabet:
	if in_word.get(l) == None:
		in_word[l] = 1

word = raw_input()

lenWord = len(word)

if lenWord > 26:
	for i in range(lenWord - 26):
		to_complete = 26
		helper = in_word

		for j in range(26):
			if word[i + j] == '?':
				to_complete -= 1

			if helper[word[i + j]] == 1:
				helper[word[i + j]] = 0
				to_complete -= 1

		if to_complete == 0: print 