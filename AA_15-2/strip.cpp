//srtip codeforces - div2

qnt = int(raw_input())
nums = map(int, raw_input().split())
somas = [nums[0]]
iguais = 0

for i in range(1, len(nums)):
	soma = somas[i - 1] + nums[i]
	somas.append(soma)

for j in range(len(somas) - 1):
	if somas[j] == somas[-1] - somas[j]:
		iguais += 1

print iguais
