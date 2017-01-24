# almost_primes 

n = int(raw_input())

primos_ate_n = range(2, (n + 1) / 2)
inicio = 1

for primo in primos_ate_n:
	for num in primos_ate_n[inicio:]:
		if num % primo == 0:
			primos_ate_n.remove(num)
	inicio += 1

quase_primos = 0
inteiros_ate_n = range(1, n + 1)

for k in inteiros_ate_n:
	divisores_primos = 0
	for m in primos_ate_n:
		if k % m == 0:
			divisores_primos += 1
	if divisores_primos == 2:
		quase_primos += 1

print quase_primos
			
