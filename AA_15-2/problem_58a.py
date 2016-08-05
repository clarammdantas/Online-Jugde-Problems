#problem 58A

n = raw_input()
letters = 0
word = ['h', 'e', 'l', 'l', 'o'] 

for i in range(len(n)):
	if 0 < len(word) <= 5 and n[i] == word[0]:
		word.pop(0)

if len(word) == 0:
	print 'YES'
else:
	print 'NO'
