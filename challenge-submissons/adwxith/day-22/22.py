a=int(input())
b=int(input())
high={}
for j in range(a,b+1):
    n=j
    i=0
    while(j!=1):
        if (j%2==0) :
            j=j//2
            i+=1
        else:
            j=(3*j)+1
            i+=1
    high[n]=[i]
Keymax = max(zip(high.values(), high.keys()))[1]
print(Keymax)