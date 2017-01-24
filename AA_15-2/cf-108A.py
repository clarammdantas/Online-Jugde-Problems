# Marks - Codeforces - div 2 A
# Clara Moraes Dantas

n, m = map(int, raw_input().split())

grades = []
successful = 0

bestStudents = [0 for i in range(n)]

for i in range(n):
	student = raw_input()
	grades.append(student)

for i in range(m):
	maxValue = -1
	for j in range(n):
		if int(grades[j][i]) > maxValue:
			maxValue = grades[j][i]

	for j in range(n):
		if maxValue == grades[j][i]:
			bestStudents[j] += 1


for k in range(n):
		if bestStudents[k] > 0:
			successful += 1

print successful