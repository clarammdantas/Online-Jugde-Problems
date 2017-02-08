# Combination Lock
# problem_540A codeforces

n = int(raw_input())
guess = raw_input()
correct = raw_input()

moves = 0
for i in range(n):
	op1 = abs(int(guess[i]) - int(correct[i]))
	op2 = 10 - int(guess[i]) + int(correct[i])
	print op1, op2
	moves += min(op1, op2)
	
print moves
