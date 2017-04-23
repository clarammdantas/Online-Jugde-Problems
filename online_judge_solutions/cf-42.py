# Football - Codeforces Div 2A - round 42
# Clara Moraes Dantas

points = {}

n = int(raw_input())

for i in range(n):
	time = raw_input()

	if points.get(time) == None:
		points[time] = 1

	else:
		points[time] += 1


maxi = 0
winner = ""

for t in points:
	if points[t] > maxi:
		maxi = points[t]
		winner = t

print winne
