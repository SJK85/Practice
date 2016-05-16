guess_me=7
start=1
while guess_me>start-1:
	if guess_me > start:
		print('Too Low!',start)

	elif guess_me == start:
		print('Found it!')
		break

	else:
		print('Something went wrong.')
		break
	start+=1

