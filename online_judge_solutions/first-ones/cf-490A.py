# Codeforces div 2 - A
# Team Olympiad

MENOR = 100000

n = int(raw_input())
areas = map(int, raw_input().split())

qtd = [0, 0, 0]
teams = {1:[], 2:[], 3:[]}

for i in xrange(len(areas)):
	qtd[areas[i] - 1] += 1
	teams[areas[i]].append(i)

menor = MENOR
for i in qtd:
	if i < menor:
		menor = i

print menor
for i in xrange(menor):
	for j in xrange(3):
		if j < 2:
			print teams[j + 1][i] + 1,
		else:
			print teams[j + 1][i] + 1
