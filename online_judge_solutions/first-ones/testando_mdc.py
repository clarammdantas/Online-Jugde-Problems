# coding: utf-8
# Maria Clara Dantas, UFCG
# testando_mdc

x, y = map(int, raw_input().split())

while True:
	q = x / y
	r = x % y
	if r != 0:
		x = r
		y = q
	else:
		mdc = q
		break
		
print mdc 
