# factory_better_way

a, m = map(int, raw_input().split())

def mdc(a, b):
	if a == 1:
		if b % 2 == 0:
			return True
		else:
			return False
	else:
		if a % 2 == 0:
			return True
		else:
			return False
	while b != 0:
		r = a % b
		q = a / b
		if a % b == b:
			return False
			break
		a, b = b, r
	return True
		
tem_ou_n_mdc = mdc(max(m, a), min(m, a))

if a != m:
	if tem_ou_n_mdc:
		print 'Yes'
	else:
		print 'No'
else:
	print 'Yes'
