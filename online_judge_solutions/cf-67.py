# Life Without Zeros - Codeforces Div 2A - 67
# Clara Moraes Dantas

x = raw_input()
y = raw_input()
z = str(int(x) + int(y))

x1 = ""
y1 = ""
z1 = ""

for i in x:
	if i != "0":
		x1 += i

for i in y:
	if i != "0":
		y1 += i

for i in z:
	if i != "0":
		z1 += i

if int(z1) == (int(x1) + int(y1)):
	print "YES"

else:
	print "NO"
