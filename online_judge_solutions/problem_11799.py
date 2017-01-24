#problem_11799 uva

n = int(input())

for i in range(n):
	speeds = input().split()
	for j in range(len(speeds)):
		speeds[j] = int(speeds[j])
	speeds.sort()
	print ("Case " + str(i + 1) + ": " + str(speeds[-1]))
