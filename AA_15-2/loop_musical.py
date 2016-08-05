#loop musical - uri

while True:
	n = int(raw_input())
	
	if n == 0: break 
	
	ns = map(int, raw_input().split())
	
	picos = []
	for i in range(len(ns) - 1):
		if ns[i] > ns[i + 1]:
			picos.append("down")
			
		elif ns[i] < ns[i + 1]:
			picos.append("up")
	
	print len(picos)
