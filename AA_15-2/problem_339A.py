#problem 339-A

op = map(int, raw_input().split("+"))

op.sort()

t = len(op)
result = ""
for i in range(t):
	if i < t - 1:
		result += str(op[i]) + "+"
	else:
		result += str(op[i])

print result
