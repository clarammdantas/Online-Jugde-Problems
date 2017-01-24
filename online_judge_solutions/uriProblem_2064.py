#uri problem 2064
#prant and the indecision

def form_name(fav_name):
	n_fav_name = ""
	for l in fav_name:
		n_fav_name += letters_in_dogsName[l][0]
	return n_fav_name
	

k, m, n = map(int, raw_input().split())
favorite_letters = raw_input()
dogs_name = raw_input()

max_favorite_letters = 0
fav_name = dogs_name
letters_in_dogsName = {}
fav_letters = {}

for l in favorite_letters:
	fav_letters[l] = l

for l in dogs_name:
	if fav_letters.get(l) != None:
		max_favorite_letters += 1
		
	if letters_in_dogsName.get(l) == None:
		letters_in_dogsName[l] = [l, 1]
	else:
		letters_in_dogsName[l][1] += 1
	
n_max_fav_letters = max_favorite_letters
for i in range(n):
	old, new = raw_input().split()
	if letters_in_dogsName.get(old) != None:
		if fav_letters.get(new) != None and fav_letters.get(old) == None:
			n_max_fav_letters += letters_in_dogsName[old][1]
		elif fav_letters.get(old) != None and fav_letters.get(new) == None:
			n_max_fav_letters -= letters_in_dogsName[old][1]
		
		if letters_in_dogsName.get(new) == None:
			letters_in_dogsName[new] = letters_in_dogsName[old]
			letters_in_dogsName.pop(old)
		elif letters_in_dogsName.get(new) != None:
			letters_in_dogsName[new][1] += letters_in_dogsName[old][1]
			letters_in_dogsName.pop(old)
		
		if n_max_fav_letters > max_favorite_letters:
			fav_name = form_name(fav_name)
			max_favorite_letters = n_max_fav_letters

print n_max_fav_letters
print fav_name 
