# Marks - Codeforces - div 2 A
# Clara Moraes Dantas

n, m = map(int, raw_input().split())

grades = []
bestStudents = [0 for i in range(n)]

for i in range(n):
	studentGrade = raw_input()
	grades.append(studentGrade)

for c in range(m):

	maxValue = -1
	for l in range(n):
		if int(grades[l][c]) > maxValue:
			maxValue = int(grades[l][c])

	for l in range(n):
		if int(grades[l][c]) == maxValue:
			bestStudents[l] += 1;

successful = 0
for i in range(n):
	if bestStudents[i] > 0:
		successful += 1;

print successful
