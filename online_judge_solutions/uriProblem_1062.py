# uri problem 1062
# rails

solution = []

while True:
	qtd_coaches = int(raw_input())
	
	if qtd_coaches == 0: break
	
	while True:
		organization = map(int, raw_input().split())
		
		if organization == [0]: break 
		
		disposal = range(1, qtd_coaches + 1)
		station = []
		
		while len(disposal) > 0 or len(station) > 0:
			out = True
			if disposal != []:
				if disposal[0] == organization[0]:
					disposal.pop(0)
					organization.pop(0)
					out = False
				else:
					station.append(disposal[0])
					disposal.pop(0)
					out = False
			
			if station != []:
				if station[-1] == organization[0]:
					station.pop(-1)
					organization.pop(0)
					out = False
			
			if out: break
			
		if len(organization) == 0:
			solution.append("Yes")
		
		else: solution.append("No")
	solution.append(" ")

n = len(solution)
for i in range(n):
	if i != n - 1:
		if solution[i] == " ":
			print
		else:
			print solution[i]
