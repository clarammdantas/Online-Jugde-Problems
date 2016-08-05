#beautiful sets of points - codeforces
import math

x, y = map(int, raw_input().split())

points = {}

def distancia(p1, p2):
	d = math.sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)
	return d

for i in xrange(x + 1):
	for j in xrange(y + 1):
		if points.get((i, j)) == None:
			points[(i, j)] = '1'

dist = {}

for i in points:
	for j in points:
		di = distancia(i, j)
		if type(di) != int:
			if dist.get(i) == None:
				dist[i] = [j]
			else:
				eh = True
				for k in dist[i]:
					di = distancia(k, j)
					if type(di) == int:
						eh = False
						break 
				if eh:
					dist[i] += [j]
print dist

maior = max(dist)
for n in dist[maior]:
	print n[0] + ' ' + n[1]
