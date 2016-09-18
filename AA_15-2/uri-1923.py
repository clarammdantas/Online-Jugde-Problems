# URI 1923 - Rerisson and Barbecue

n, g = map(int, raw_input().split())

friends = {}

for i in range(n):
	p1, p2 = raw_input().split()

	if friends.get(p1) == None:
		friends[p1] = [p2]
	else:
		friends[p1].append(p2)

	if friends.get(p2) == None:
		friends[p2] = [p1]
	else:
		friends[p2].append(p1)

level = {"Rerisson" : 0}
ans = []
i = 1
frontier = ["Rerisson"]
invited = 0

while i <= g and frontier:
	next = []

	for u in frontier:
		for v in friends[u]:
			if level.get(v) == None:
				ans.append(v)
				invited += 1
				level[v] = i
				next.append(v)

	frontier = next
	i += 1

print invited

invited_people = sorted(ans)

for i in range(invited):
	print invited_people[i]