lens = {}

for i in 'ABCD':
	ans = raw_input()
	lens[i] = len(ans) - 2

resMin = {}
resMax = {}
for i in lens.keys():
	for j in lens.keys():
		if i != j:
			if lens[j] % 2 == 0:
				a = lens[j] / 2
			else:
				a = lens[j] / 2 + 1

			if lens[i] <= a: ans += 1, letter = i
			else: 

