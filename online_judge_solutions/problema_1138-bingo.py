#bingo problema_1136
#URI

while True:
	qnt_b, qnt_n = map(int, raw_input().split())
	
	if qnt_b == 0 and qnt_n == 0: break 
	
	number_rest = map(int, raw_input().split())
	number_rest.sort()
	
	for i in range(number_rest):
		if number_rest[0] != 0:
			if 
