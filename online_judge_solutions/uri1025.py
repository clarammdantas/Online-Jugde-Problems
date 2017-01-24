# uri 1025

def findMarble(e, n):
	begin = 0
	end = n-1
	mid = begin + (end - begin) / 2
	
	result = -2;
	while end >= begin:
		mid = begin + (end - begin) / 2
		
		if marbles[mid] == e:
			end = mid - 1
			begin = 0
			result = mid
		
		elif marbles[mid] > e: end = mid - 1
		else: begin = mid + 1
	
	return result + 1
	
case = 0
while True:
	n, q = map(int, raw_input().split())
	case += 1
	
	if n == 0 and q == 0: break 
	
	marbles = []
	for i in range(n):
		x = int(raw_input())
		marbles.append(x)
	
	marbles.sort()
	
	results = []
	for i in range(q):
		qu = int(raw_input())
		index = findMarble(qu, n)
		results.append((qu, index))
		
	print "CASE# %d:" % case
	for i in range(q):
		if results[i][1] < 0:
			print str(results[i][0]) + " not found"
		else:
			print str(results[i][0]) + " found at " + str(results[i][1])  
