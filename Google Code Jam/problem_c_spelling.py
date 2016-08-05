#problem_c spelling

converted = {"a":"2", "b":"22","c":"222", "d":"3","e":"33", "f":"333",
			"g":"4", "h":"44", "i":"444", "j":"5", "k":"55", "l":"555",
			"m":"6", "n":"66", "o":"666", "p":"7", "q":"77", "r":"777", 
			"s":"7777", "t":"8", "u":"88", "v":"888", "w":"9", "x":"99",
			"y":"999", "z":"9999", " ": "0"}
			
n = int(raw_input())

for i in range(n):
	msg = raw_input()
	
	t = len(msg)
	n_msg = ''
	for j in range(t - 1):
		n_msg += converted[msg[j]]
		if msg[j] == msg[j + 1] or converted[msg[j]] in converted[msg[j + 1]] or converted[msg[j + 1]] in converted[msg[j]]:
			n_msg += " "
	n_msg += converted[msg[-1]]
	print "Case #%d: %s" %(i + 1, n_msg)
