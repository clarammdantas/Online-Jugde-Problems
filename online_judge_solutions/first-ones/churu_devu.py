# coding: utf-8
# Maria Clara Dantas, UFCG
# churu_devu

n_musicas, tempo_evento = map(int, raw_input().split())
duracao_musica = map(int, raw_input().split())
num_descancos = n_musicas - 1                                # quantidade de descanso que devu precisa entre as músicas
tempo_total_musicas = sum(duracao_musica)

possibilidade_evento = tempo_evento - (tempo_total_musicas + 10 * num_descancos)

if possibilidade_evento >= 0:
	n_piadas_churu = (possibilidade_evento / 5) + 2 * num_descancos
	print n_piadas_churu
else:
	print '-1'
