# coding: utf-8
# Maria Clara Dantas, UFCG
# string_task

palavra = raw_input()

nova_palavra = ''

for i in range(len(palavra)):
	if palavra[i] not in 'AEIOUYaeiouy':
		nova_palavra += '.' + palavra[i].lower()
print nova_palavra
