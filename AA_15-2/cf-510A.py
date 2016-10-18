# Codeforces - div 2 A
# Fox and Snake

n, m = map(int, raw_input().split())

aux = 0
entrou = False

for i in xrange(n):
	out = ""
	for j in xrange(m):
		if i % 2 == 0:
			out += "#"
			entrou = False

		else:
			entrou = True
			if aux % 2 == 0 and j < m - 1:
				out += "."
			elif aux % 2 == 0 and j == m - 1:
				out += "#"

			elif aux % 2 != 0 and j == 0:
				out += "#"
			else:
				out += "."

	print out
	if entrou: aux += 1