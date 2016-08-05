#i wanna be the guy - codeforces-div2A

n = int(raw_input())
x = map(int, raw_input().split())
y = map(int, raw_input().split())
if len(x) > 1 and len(y) > 1:
	x = x[1:]
	y = y[1:]

xy = x + y
xy = list(set(xy))
xy.sort()
if xy[0] == 0:
	xy = xy[1:]

if len(xy) == n:
	print "I become the guy."
else:
	print "Oh, my keyboard!"
