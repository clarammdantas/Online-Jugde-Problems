#reverse and add
#problem 10018 UVA

n = int(input())

for i in range(n):
	it = 1
	num = str(input())
	numR = int(num[-1: -len(num)-1:-1])
	num = int(num)
	check = str(num + numR)
	while check != check[-1:-len(check)-1:-1]:
		it += 1
		num = check
		numR = int(num[-1: -len(num)-1:-1])
		num = int(num)
		check = str(num + numR)
	print (str(it) + " " + str(check))
