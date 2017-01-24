#problema_1250.py
#URI

n = int(raw_input())

for i in range(n):
	hit = 0
	mov = int(raw_input())
	shots = map(int, raw_input().split())
	what_he_does = raw_input()
	
	for j in range(mov):
		if what_he_does[j] == 'S' and (shots[j] == 1 or shots[j] == 2):
			hit += 1
		
		elif what_he_does[j] == 'J' and (shots[j] > 2):
			hit += 1
			
	print hit
