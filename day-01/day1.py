def day(a,b):
    for i in range(a,b+1):
        if i%3==0:
            print("Foo")
        elif i%2==0:
            print("bar")
        else:
            print("baz")
day(3,11)