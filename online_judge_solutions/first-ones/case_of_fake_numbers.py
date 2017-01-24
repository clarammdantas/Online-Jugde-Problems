# coding: utf-8
# Maria Clara Dantas, UFCG
# case_of_fake_numbers

num = int(raw_input())
buttons = map(int, raw_input().split())

if buttons[0] == num - 1:
	k = 1
else:
	k = num - buttons[0]

soma = 0	
for i in range(num):
	if i % 2 == 0:
		if buttons[i] + k > num - 1:
			buttons[i] = ((num) - buttons[i]) - k
		else:
			buttons[i] += k
	else:
		if buttons[i] - k < 0:
			buttons[i] = ((num) - buttons[i]) - k
		else:
			buttons[i] -= k
	soma += buttons[i]

if soma == ((num - 1) * num) / 2:
	print 'Yes'
else:
	print 'No'
