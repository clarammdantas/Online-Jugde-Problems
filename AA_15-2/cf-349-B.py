# Codeforces round 202 div 2 B - Color the Fence

MAX = 1000002

v = int(raw_input())
ad = map(int, raw_input().split())

ans = ''
tentados = 8
while tentados >= 0 and v > 0:
	if (ad[tentados] < v):
		qtd = ad[tentados] / v
		ans += str(tentados + 1) * qtd
		v -= (ad[tentados] / v)
	tentados -= 1

if ans != '':
	print ans

else:
	print -1
