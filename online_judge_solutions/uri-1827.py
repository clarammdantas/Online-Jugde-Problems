# URI - Matriz Quadrada IV  - 1827
# Clara Moraes Dantas

while True:
	try:
		n = int(raw_input())
		begin = n / 3
		end = n - begin - 1

		m = ["" for i in range(n)]
		
		for i in range(n):
			for j in range(n):
				if i == j and (i < begin or i > end and j < begin or j > end):
					m[i] += '2'
						
				elif i == n - j - 1 and (i < begin or i > end and j < begin or j > end):
					m[i] += '3'
					
				elif i == n / 2 and j == n / 2:
					m[i] += '4'
				
				elif i >= begin and i <= end and j <= end and  j >= begin:
					m[i] += '1'
					 
				else:
					m[i] += '0'
		
		for i in range(n):
			print m[i]
			
		print
		
	except EOFError: break
