def reverseDigits(num):
	rev_num = 0
	while (num > 0):
		rev_num = rev_num * 10 + num % 10
		num = num//10
	return rev_num

def isPalindrome(num):
	return (reverseDigits(num) == num)

def ReverseandAdd(num):
	rev_num = 0
	while (num <= 4294967295):
		rev_num = reverseDigits(num)
		num = num + rev_num
		if(isPalindrome(num)):
			print (num)
			break
		else:
			if (num > 4294967295):
				print ("No palindrome exist")

a=int(input())
ReverseandAdd(a)