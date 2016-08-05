#problem_1507

def is_subseq(w, w2):
	it = iter(w2)
	return all(any(c == ch for c in it) for ch in w)

n = int(raw_input())

for i in xrange(n):
	word = raw_input()
	test_sub = int(raw_input())
	
	for j in range(test_sub):
		word_2 = raw_input()
		if is_subseq(word_2, word):
			print "Yes"
		else:
			print "No"
		
