#codeforces 701 - div 2 a

n = int(raw_input())
num_cards = map(int, raw_input().split())
qtd = sum(num_cards) / (n/2)

used_cards = []

for i in range(len(num_cards)):
	for j in range(i+1, len(num_cards)):
		if not (i in used_cards or j in used_cards):
			if num_cards[i] + num_cards[j] == qtd:
				print i + 1, j + 1
				used_cards.append(i)
				used_cards.append(j)
