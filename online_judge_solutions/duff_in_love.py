#duff_in_love

n = int(raw_input())

result = 1
toCheck = 2

while toCheck * toCheck <= n:
	if n % toCheck == 0:
		result *= toCheck
		while(n % toCheck == 0):
			n /= toCheck
	toCheck += 1

if n > 1: result *= n

print result
