# factory

from math import sqrt

a, m = map(int, raw_input().split())

bigger = max(a, m)
generate_primes_until = range(2, bigger)
beginning = 1

for prime in generate_primes_until:
	for num in generate_primes_until[beginning:]:
		if num % prime == 0:
			generate_primes_until.remove(num)
	beginning += 1

mdc = False
if a > 1 and m > 1:
	for number in generate_primes_until:
		if a % number == 0 and m % number == 0:
			mdc = True
			break
	if mdc:
		print 'Yes'
	else:
		print 'No'
else:
	if a % 2 == 0 or m % 2 == 0:
		print 'Yes'
	elif a == 1 and m == 1:
		print 'Yes'
	else:
		print 'No'		
