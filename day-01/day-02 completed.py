a=int(input("enter the number 1 :"))
b=int(input("enter the number 2 : "))
for i in range(a,b+1):
    if i%2==0:
        if i%3==0:
            print('foo')
        else:
            print("bar")
    else:
        if i%3==0:
            print("foo")
        else:
            print("baz")