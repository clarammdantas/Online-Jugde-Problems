#problem 507-B codeforces

import math

r, x, y, x1, y1 = map(float, raw_input().split())

distance = math.sqrt((x - x1) ** 2 + (y - y1) ** 2)
t = distance / (2 * r)
print int(math.ceil(t))
