#problem_59A codeforces

n = raw_input()

upper = 0
low = 0

for i in n:
	if i.isupper():
		upper += 1
	else:
		low += 1

if upper > low:
	print n.upper()
else:
	print n.lower()
