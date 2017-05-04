#UVa 272 

while True:
	n = ""
	try:
		line = input()
		n += line

	except EOFError:
		ans = ""

		total = len(n)
		opening = True
		for i in range(total):
			if n[i] == '"':
				if opening:
					opening = False
					ans += "``"

				elif not opening:
					opening = True
					ans += "''"

			else:
				ans += n[i]
		print(ans)
		break
