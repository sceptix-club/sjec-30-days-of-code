a=int(input("enter the starting number:"))
b=int(input("enter the ending number:"))
d=[]
count=0
for i in range(a+1,b):
    count=0
    for j in range(2,int(i/2)+1):
        count=0
        if (i % j) == 0:
            break
        else:
            count+=1
    if count>0:
        d.append(i)
    h=len(d)
for i in range(0,h-1):
    print(d[i], "-", d[i+1], ":",d[i+1]-d[i]-1)
