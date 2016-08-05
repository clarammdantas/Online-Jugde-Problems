#codeforces_problem_498-B

g = int(raw_input())
girls = map(int, raw_input().split())
girls = sorted(girls)

b = int(raw_input())
boys = map(int, raw_input().split())
boys = sorted(boys)

result = i = j = 0

menor = min(b, g)

while(i < g and j < b):
	if girls[i] == boys[j] or abs(girls[i] - boys[j]) == 1:
		result += 1
		i += 1
		j += 1
	
	elif girls[i] < boys[j]: i += 1
	elif boys[j] < girls[i]: j += 1

				
print result
