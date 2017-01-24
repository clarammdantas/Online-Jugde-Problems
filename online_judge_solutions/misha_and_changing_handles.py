#misha_and_chaning_handles

n = int(raw_input())

first_name = []
used = {}

for i in xrange(n):
	old, new = raw_input().split()
	if used.get(old) == None and used.get(new) == None:
		first_name.append([old, new])
		used[old] = 1
		used[new] = 1
	elif used.get(old) != None and used.get(new) == None:
		for j in range(len(first_name)):
			if first_name[j][-1] == old:
				first_name[j].append(new)
		used[new] = 1
				
print len(first_name)
	
for i in xrange(len(first_name)):
	print first_name[i][0], first_name[i][-1]
