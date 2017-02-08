# Really Nasted Lists
# Clara Moraes Dantas

def setList(input_list):
	ans = []

	for element in input_list:
		# Base Case
		if type(element) == str:
			ans.append(element)

		else:
			# Recursive call
			ans.extend(setList(element))

	return set(ans)


clara = ['a', ['a', 'b', ['k', 'l'], ['w']], 'z']
l1 = ['a', 'k', 'i', 'm', 'a']
l2 = [[[['a']]]]
l3 = [['m', [['n', 'v']]], ['a', 'c', ['a', ['i']]], 'k']
l4 = [[[]]]

assert setList(clara) == set(['a', 'l', 'b', 'k', 'z','w'])
assert setList(l1) == set(['a', 'm', 'i','k'])
assert setList(l2) == set(['a'])
assert setList(l3) == set(['m', 'n', 'v', 'c', 'a', 'i', 'k'])
assert setList(l4) == set([])
