#anton_and_letters - codeforces-div2A

anton_set = raw_input()
anton_set = anton_set[1:-1]

anton_set = anton_set.split(", ")
anton_set = set(anton_set)

if anton_set == set(['']):
	print 0
	
else:
	print len(anton_set)
