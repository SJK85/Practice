guess_me=7
numbers=[]
for number in range(10):
	numbers.append(number)

from random import choice
guess=choice(numbers)

print('Enter your guess:',guess)
if guess >guess_me:
	print('Too High')

elif guess ==guess_me:
	print('Correct!')

elif guess <guess_me:
	print('Too Low')

else:
	print('Something went wrong')

