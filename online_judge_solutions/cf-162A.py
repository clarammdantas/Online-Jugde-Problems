# Colorful Stones - Codeforces 162 A - div 2
# Clara Moraes Dantas

s = raw_input()
t = raw_input()

iT = 0
iS = 0

while iT < len(t):
	if s[iS] == t[iT]:
		iS += 1

	iT += 1

print iS + 1
