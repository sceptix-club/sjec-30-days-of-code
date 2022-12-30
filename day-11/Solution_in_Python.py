import math
import operator

r_circle=input()
s_square=input()
s_triangle=input()
l_rectangle,b_rectangle=input().split()

d = {
  "Circle": float(math.pi*int(r_circle)*int(r_circle)),
  "Square": float(int(s_square)*int(s_square)),
  "Triangle": float(math.sqrt(3)*int(s_triangle)*int(s_triangle)/4),
  "Rectangle": float(int(l_rectangle)*int(b_rectangle))
}

sorted_d = dict(sorted(d.items(), key=operator.itemgetter(1),reverse=True))

for shape in sorted_d:
    print(shape)
