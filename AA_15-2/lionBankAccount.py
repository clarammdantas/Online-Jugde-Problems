#the lion bank account - codeforces div2a

balance = int(raw_input())

if balance > 0:
	print balance

else:
	num = str(balance)[1:]
	n1 = -int(num[:-1])
	n2 = -int(num[:-2] + num[-1])
	if n1 < n2:
		print n2
	else:
		print n1
