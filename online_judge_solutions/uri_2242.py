# Risadinhas - URI 2242
# Clara Moraes Dantas

laugh = raw_input()

vowels = "aeiou"
finalLaugh = ""

for l in laugh:
	if l in vowels:
		finalLaugh += l

if finalLaugh == finalLaugh[-1:-len(laugh) - 1:-1]:
	print "S"

else:
	print "N"