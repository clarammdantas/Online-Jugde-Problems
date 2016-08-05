# coding: utf-8
# Maria Clara Dantas, UFCG
# Magnets

n = int(raw_input())
grupos = 1

m1 = raw_input()
for i in range(n - 1):
	m2 = raw_input()
	if m2 != m1:
		grupos += 1
	m1 = m2
	
print grupos
