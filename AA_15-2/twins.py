#twins codeforces -div2A

n = int(raw_input())

nums = map(int, raw_input().split())

nums.sort()
nums = nums[n - 1: -1 : -1]

acum = [nums[0]]

for i in nums[1:]:
	acum1 = acum[-1] + i
	acum.append(acum1)

find = False
for j in range(n):
	if acum[j] > (acum[-1] - acum[j]) and (acum[-1] - acum[j] != 0):
		print j
		find = True

if not find:
	print n
