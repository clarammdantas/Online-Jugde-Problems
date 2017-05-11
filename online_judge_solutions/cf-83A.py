time = raw_input().split(":")
ans = False
if int(time[0]) == 23:
	nextHour = "00"

	if int(time[1]) < 32:
		print "23:32"
		ans = True

else:
	if (int(time[0][1] + time[0][0]) < 59 and time[0][1] + time[0][0] != time[1] and int(time[0][1] + time[0][0]) > int(time[1])):
		nextHour = time[0]
		print nextHour + ":" + nextHour[1] + nextHour[0]
		ans = True

	nextHour = str((int(time[0]) + 1) % 24)
	if int(nextHour) < 10:
		nextHour = "0" + nextHour

nextMin = nextHour[1] + nextHour[0]

while (int(nextMin) > 59):
	if int(time[0]) == 23:
		nextHour = "00"

	else:
		if (int(nextHour[1] + nextHour[0]) < 59):
			ans = True
			print nextHour + ":" + nextHour[1] + nextHour[0]
		
		nextHour = str((int(time[0]) + 1) % 24)
		time[0] = str((int(time[0]) + 1) % 24)

	if int(nextHour) < 10:
		nextHour = "0" + nextHour

	nextMin = nextHour[1] + nextHour[0]

if not ans: 
	print nextHour + ":" + nextMin
