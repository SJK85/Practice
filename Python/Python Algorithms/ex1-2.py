string1='debit card'
string2='bad credit'

def anagram(s1,s2):
	l1=[]
	l2=[]
	for c in s1:
		l1.append(c)

	l1.sort()
	for c in s2:
		l2.append(c)

	l2.sort()
	#print(l1)
	#print(l2)
	if l1==l2: return 1
	else: return

if anagram(string1,string2):
	print('They are an anagram!')

else:
	print('They are not an anagram. whomp whomp.')

#Building the list from a string could take longer than needed
#Sorting the list to return the same value may take longer than needed
#May be able to count the different characters in each string and compare them instead
#May not always work depending how append() scales. Comparing two lists in different orders will not come back true.
	#Would need further testing or research, but for smaller scales it works perfectly fine.
	