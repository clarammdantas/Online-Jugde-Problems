#codeforces div 2 - 474B

def findWorm(find):
	begin = 0
	end = len(intervals) - 1
	mid = (begin + (end - begin)) / 2
	
	if intervals[mid][0] <= find  and find <= intervals[mid][1]: return mid + 1
	
	while begin <= end:
		mid = begin + ((end - begin) / 2)
		
		if find < intervals[mid][0]: end = mid - 1
		elif find > intervals[mid][1]: begin = mid + 1
		else: return mid + 1
	
	return -1
	
	
p = int(raw_input())
np = map(int, raw_input().split())

intervals = []
qtd = 0
for i in range(p):
	if i == 0: qtd = 0
	else: qtd = intervals[-1][1]
	
	pair = (qtd + 1, qtd + np[i])
	intervals.append(pair)
	
q = int(raw_input())
queries = map(int, raw_input().split())
ans = []

for i in range(q):
	a = findWorm(queries[i])
	ans.append(a)

for i in ans:
	print i
