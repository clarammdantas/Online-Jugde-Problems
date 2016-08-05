# coding: utf-8
# Maria Clara Dantas, UFCG
# trees_in_a_row

qnt_trees, k = map(int, raw_input().split())
tamanhos = map(int, raw_input().split())
passos = 0
oq_fazer = []
ultimo_elemento = tamanhos[0] + (qnt_trees - 1) * k
pa_gerada = xrange(tamanhos[0], ultimo_elemento + 1, k)

for i in xrange(qnt_trees):
	if pa_gerada[i] > tamanhos[i]:
		passos += 1
		oq_fazer.append('+ %d %d' % (i + 1, pa_gerada[i] - tamanhos[i]))
	elif pa_gerada[i] < tamanhos[i]:
		passos += 1
		oq_fazer.append('- %d %d' % (i + 1, abs(pa_gerada[i] - tamanhos[i])))
print passos

for x in oq_fazer:
	print x
