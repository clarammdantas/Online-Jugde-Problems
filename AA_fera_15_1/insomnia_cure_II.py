# coding: utf-8
# Maria Clara Dantas, UFCG
# insomnia_cure_II

def mdc(x, y):       # x tem que ser o maior
	if x % y == 0 or x == y:
		mdc = y
		return mdc
	else:
		while True:
			q = x / y
			r = x % y
			if x != 0:
				if q == 0:
					mdc = 0
					return mdc
				x = r
				y = q
			else:
				mdc = q
				return mdc

def mmc(x, y):             # x tem que ser o maior
	if mdc(x, y) == 0:
		mmc = x * y
		return mmc
	elif mdc(x, y) != 0:
		mmc = (x * y) / mdc(x, y)
		return mmc
	
k = int(raw_input())
l = int(raw_input())
m = int(raw_input())
n = int(raw_input())
d = int(raw_input())

divisores_repetidos = 0

if k == 1 or l == 1 or m == 1 or n == 1:
	print d

else:
	contador = 0
	mmc_kl = mmc(max(k, l), min(k,l))
	if mmc_kl <= d:
		if mmc_kl:
			divisores_repetidos += (d / mmc_kl)
	
	mmc_mk = mmc(max(k, m), min(k,m))
	if mmc_mk <= d:
		divisores_repetidos += (d / mmc_mk)
		
	mmc_mn = mmc(max(m, n), min(m, n))
	if mmc_mn <= d:
		divisores_repetidos += (d / mmc_mn)
		
	mmc_nk = mmc(max(k, n), min(k,n))
	if mmc_nk <= d:
		divisores_repetidos += (d / mmc_nk)
	
	mmc_ml = mmc(max(m, l), min(m, l))
	if mmc_kl <= d:
		divisores_repetidos += (d / mmc_ml)
	
	mmc_nl = mmc(max(n, l), min(n, l))
	if mmc_nl <= d:
		divisores_repetidos += (d / mmc_nl)
print divisores_repetidos
soma_divisoes = 0		
for numero in [k, l, m, n]:
	div = d / numero
	soma_divisoes += div
print soma_divisoes
resultado = soma_divisoes - divisores_repetidos
print resultado
