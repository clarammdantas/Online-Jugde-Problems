#problem_556A
#codeforces

n = int(raw_input())
num = raw_input()

zeros = 0
ones = 0

for i in num:
	if i == '0':
		zeros += 1
	else:
		ones += 1
		
if ones > zeros:
	print n - (zeros * 2)
elif zeros > ones:
	print n - (ones * 2)
else:
	print 0
