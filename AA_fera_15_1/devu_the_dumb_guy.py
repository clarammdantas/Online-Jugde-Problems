# coding: utf-8
# Maria Clara Dantas, UFCG
# devu_the_dumb_guy

s, t = map(int,raw_input().split())
chapters = map(int, raw_input().split())

chapters.sort()
tempo_minimo = 0

for i in range(s):
	if t > 1:
		tempo_minimo += chapters[i] * t
		t -= 1
	elif t == 1:
		tempo_minimo += chapters[i]
		
print tempo_minimo
