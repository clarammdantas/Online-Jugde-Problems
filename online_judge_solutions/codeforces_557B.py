# pasha and tea
# codeforces 557-B

n, w = map(float, raw_input().split())

maxMeninas = (w / 3) / n
maxMeninos = (2 * w / 3) / n

maxTotal = raw_input().split()

menorM = sorted(map(float, maxTotal[:int(n)]))[0]
menorB = sorted(map(float, maxTotal[int(n):]))[0]

menorMeninas = min(menorM, menorB)
menorMeninos = max(menorM, menorB)

if menorMeninas > maxMeninas:
	menorMeninas = maxMeninas
	
if menorMeninos > maxMeninos:
	menorMeninos = maxMeninos
	
if 2 * menorMeninas > menorMeninos:
	tirar = 2 * maxMeninas - menorMeninos
	maxMeninos -= tirar
	maxMeninas = maxMeninos / 2

result = n * maxMeninas + n * maxMeninos

print result
