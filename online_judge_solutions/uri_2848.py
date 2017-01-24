# Corvo Contador - URI 1848
# Clara Moraes Dantas

def decNumber(eyes):
	total = 0

	eyesState = []
	for i in range(3):
		if eyes[i] == "-": eyesState.append(0)
		else: eyesState.append(1)

	total += eyesState[0] * 4
	total += eyesState[1] * 2
	total += eyesState[2] * 1

	return total

loteryNumbers = []
blink = 0
while True:
	if blink == 3: break

	number = 0

	while True:
		command = raw_input()

		if command == "caw caw": break

		number += decNumber(command)

	loteryNumbers.append(number)
	blink += 1

for i in range(len(loteryNumbers)):
	print loteryNumbers[i]