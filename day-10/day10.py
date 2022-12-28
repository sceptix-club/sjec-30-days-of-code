def fact(n):
    if n == 1:
        return n
    elif n < 1:
        return ("NA")
    else:
        return n*fact(n-1)

m=int(input("enter the rows:"))
ncr=fact(m-6)/(fact(4)*fact(m-10))
print(ncr)