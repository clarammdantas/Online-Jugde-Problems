# coisas legais da russia
#codeforces

n, k = map(int, raw_input().split())

result = 2 * n - k + 1

for i in range(k):
	mat = map(int, raw_input().split())
	
	for j in range(mat):
		mat2 = int(raw_input())
		if mat2 == j + 1:
			result -= 2

print result
