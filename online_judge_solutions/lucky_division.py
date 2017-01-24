#lucky_division -codeforces - Div2-A

n = int(raw_input())

found = False

for i in range(1, n + 1):
	num = str(i)
	lucky = True
	
	for j in num:
		if not(j == "4" or j == "7"):
			lucky = False
			break
	if lucky:
		if n % i == 0:
			print "YES"
			found = True
			break

if not found:
	print "NO"
