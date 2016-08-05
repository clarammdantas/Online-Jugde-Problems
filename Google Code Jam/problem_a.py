#classification_round - google code jam
# problem A

n = int(raw_input())

for i in range(n):
	credit = int(raw_input())
	products = int(raw_input())
	p = map(int, raw_input().split())
	
	for j in range(products):
		if j < products - 1:
			for k in range(j + 1, products):
				if p[j] + p[k] == credit:
					print "Case #%d: %d %d" %(i + 1, j + 1, k + 1)
					break
