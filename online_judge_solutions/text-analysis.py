#text analysis

n = input().split("_")

biggestOut = 0
qtdInside = 0

print (n)

if n == "": print ("0 0")
else:
	inside = False
	for i in n:
		if i == "": continue
		
		if i[0] == "(":
			inside = True

		elif i[-1] == ")":
			qtdInside += 1
			inside = False

		if not inside:
			if len(i[0]) > biggestOut:
				biggestOut = len(i[0])

		else:
			qtdInside += 1

print ("%d %d", (biggestOut, qtdInside))
