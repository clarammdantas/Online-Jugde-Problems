# coding: utf-8
# Maria Clara Dantas, UFCG
# borboletas

especies_diferentes = []
qnt_especies_diferentes = 0
n = int(raw_input())

floresta = [[0 for i in range(n)] for j in range(n)]

for j in range(n):
	floresta[j] = raw_input().split()

for v in range(n * 2):
	a, k = map(int, raw_input().split())
	if 0 <= a - 1 <= n -1 and 0 <= k - 1 <= n -1:
		if floresta[a-1][k-1] not in especies_diferentes:
			qnt_especies_diferentes += 1
			especies_diferentes.append(floresta[a-1][k-1])
		
print qnt_especies_diferentes
