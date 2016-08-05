#dubstep codeforces-div2A

real_lyrics = raw_input().split("WUB")

n = len(real_lyrics)
for i in range(n):
	if i < n - 1 and real_lyrics[i] != "":
		print real_lyrics[i],
	else:
		if real_lyrics[i] != "":
			print real_lyrics[i]
