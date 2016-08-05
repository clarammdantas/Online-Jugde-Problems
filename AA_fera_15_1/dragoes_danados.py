# dragoes_danados

k = int(raw_input())
l = int(raw_input())
m = int(raw_input())
n = int(raw_input())
d = int(raw_input())

atingidos = 0

for i in xrange(1, d + 1):
	if i % k == 0:
		atingidos += 1
	elif i % l == 0:
		atingidos += 1
	elif i % m == 0:
		atingidos += 1
	elif i % n == 0:
		atingidos += 1
		
print atingidos
