# coding: utf-8
# Maria Clara Dantas
# lua

dia1, dia2 = map(int, raw_input().split())

if dia2 < dia1 and 3 <= dia2 <= 96:
	print 'minguante'
elif 0 <= dia2 <= 2:
	print 'nova'
elif 3 <= dia2 <= 96:
	print 'crescente'
else:
	print 'cheia'
