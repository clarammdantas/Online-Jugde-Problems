# fast_prime

n = int(raw_input())

for i in range(n):
	divisors = 0
	number = int(raw_input())
	if number < 3:
		print 'Prime'
	elif number % 2 == 0:
		print 'Not Prime'
	if number % 2 != 0 and number > 2:
		for a in xrange(3, number / 2 + 1, 2):
			if number % a == 0:
				divisors += 1
				print 'Not Prime'
				break
	if divisors == 0:
		print 'Prime'
