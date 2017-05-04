#UVa - 394

arrays = {}

n, r = map(int, input().split())

for i in range(n):
	array = input().split()

	k = []
	for j in range(1, len(array)):
		k.append(int(array[j]))

	arrays[array[0]] = k

ans = {}
for i in range(r):
	ask = input().split()

	k = arrays[ask[0]] #array info
	iS = []
	ansN = []

	for j in range(1, len(ask)):
		iS.append(int(ask[j]))

	cd = k[2]
	a1 = 0
	c0 = k[0]
	aux = cd
	for j in range(cd - 1, 0, -1):
		aj = aux * (k[2*j + 4] - k[2 * j + 3] + 1)
		aux = aj

		a1 += (aj * iS[j - 1])
		c0 -= (aj * k[2 * j + 1])
		print (str(aj) + " " + str(a1) + " " + str(c0))

	c0 -= cd * k[len(k) - 2]
	cd *= iS[-1]
	total = c0 + a1 + cd
	#print (ask[0] + " " + str(a1) + " " + str(cd) + " " + str(c0))
	ansN.append(iS)
	ansN.append(total)
	ans[ask[0]] = ansN

print(ans)

for i in ans:
	r = ""
	r += i + "["
	for j in range(1, len(ans[i]) - 1):
		r += str(ans[i][j])

	r += "] " + str(ans[i][len(ans[i]) - 1])
	print(r)