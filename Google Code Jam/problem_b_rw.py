#problem_b reverse words

n = int(raw_input())

for i in range(n):
	text = raw_input().split()
	
	text = text[-1: -len(text) -1 : -1]
	
	t = len(text)
	
	print "Case #%d:" %(i + 1),
	for j in range(t):
		if j < t - 1:
			print text[j],
		else:
			print text[j]
