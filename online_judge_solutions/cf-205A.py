# Domino - Codeforces 205 div 2 - A
# Clara Moraes Dantas

n = int(raw_input())

upper = 0
lower = 0

differentParaties = (-1, -1)

for i in xrange(n):
	x, y = map(int, raw_input().split())
	upper += x; lower += y

	if x % 2 == 0 and y % 2 != 0:
		differentParaties = (x, y)

	elif x % 2 != 0 and y % 2 == 0:
		differentParaties = (x, y)

if upper % 2 == 0 and lower % 2 == 0:
	print 0

elif upper % 2 != 0 and lower % 2 != 0:
	if  differentParaties[1] != -1 and differentParaties[0] != -1:
		print 1

	else:
		print -1

else:
	print -1
