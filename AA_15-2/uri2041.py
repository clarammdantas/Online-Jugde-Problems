#godelitos sequence - uri 2041

seq = [[3], [1, 3]]

for i in range(40):
	occurenceCounter = []
	times = 1
	for j in range(len(seq[-1]) - 1):
		if seq[-1][j] == seq[-1][j+1]:
			times += 1
		else:
			occurenceCounter.append(times)
			occurenceCounter.append(seq[-1][j])
			if (j + 1) == len(seq[-1]) - 1:
				occurenceCounter.append(1)
				occurenceCounter.append(seq[-1][-1])
			times = 1
	seq.append(occurenceCounter)

while True:
	try:
		n = int(raw_input())
		result = ""
		
		for i in seq[n - 1]:
			result += str(i)
			
		print result
	
	except: break 
