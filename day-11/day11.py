import math
def circle(p):
    carea=3.14*p*p
    return carea


def square(q):
    sarea=q*q
    return sarea

def triangle(r):
    tarea=(math.sqrt(3)/4)*r*r
    return tarea

def rectangle1(s,t):
    rarea=s*t
    return rarea

p=int(input('enter the radius of circle:'))
q=int(input('enter the side of square:'))
r=int(input('enter the side of equilateral triangle:'))
s=int(input('enter the length of rectangle:'))
t=int(input('enter the breadth of rectangle:'))
a={"square":[],"triangle":[],"circle":[],"rectangle":[]}
a["circle"].append(circle(p))
a["triangle"].append(triangle(r))
a["square"].append(square(q))
a["rectangle"].append(rectangle1(s,t))

ascending = sorted(a.items(), key=lambda x: x[1], reverse=True)

for i in ascending:
    print(i[0])