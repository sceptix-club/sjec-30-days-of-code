def palindrome(n):
    
    for i in range(500):
        x=(str(n)[::-1])
        n=n+int(x)
        
        if str(n)==str(n)[::-1]:
            print(n)
            return
        
    print("Na")
    
n=int(input())
palindrome(n)
