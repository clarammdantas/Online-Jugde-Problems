#problem 591-b Codeforces

import string 

n, q = map(int, raw_input().split())
word = raw_input()

letters = {}

alpha = string.ascii_lowercase

for l in alpha:
	letters[l] = [l]

for i in range(q):
	l1, l2 = raw_input().split()
	
	for l in letters:
		if letters[l][-1] == l1:
			letters[l].append(l2)
			
		elif letters[l][-1] == l2:
			letters[l].append(l1)

nWord = ''

for l in word:
	nWord += letters[l][-1]

print nWord
