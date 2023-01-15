
def manipulateString(str) :

	for i in range(len(str)) :
		
		asc = ord(str[i])
		rem = asc - (26 - (ord(str[i]) - ord('a')))

		m = rem % 26
		str[i] = chr(m + ord('a'))
	print(''.join(str))


str=input(str)
str = list(str)
manipulateString(str)