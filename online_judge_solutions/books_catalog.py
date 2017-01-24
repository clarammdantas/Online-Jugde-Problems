#books_catalog uri

port = map(int, raw_input().split())
mat = map(int, raw_input().split())
quim = map(int, raw_input().split())
fis = map(int, raw_input().split())
bio = map(int, raw_input().split())

sets = int(raw_input())
maiores = []

for p in port[1:]:
	for m in mat[1:]:
		for q in quim[1:]:
			for f in fis[1:]:
				for b in bio[1:]:
					soma = p + m + q + f + b
					maiores.append(soma)
maiores.sort()


print sum(maiores[-sets:])
