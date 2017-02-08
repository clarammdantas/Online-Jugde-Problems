# coding: utf-8
# Maria Clara Dantas, UFCG
# counterexample

a, b = map(int, raw_input().split())

if b - a == 1 or b - a == 0:
	print '-1'

elif b - a == 2:
	if a % 2 == 0:
		print '%d %d %d' % (a, a + 1, a + 2)
	else:
		print '-1'
		
else:
	if a % 2 == 0:
		print '%d %d %d' % (a, a + 1, a + 2)
	else:
		print '%d %d %d' % (a + 1, a + 2, a + 3)
