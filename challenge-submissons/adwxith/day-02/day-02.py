n=int(input("enter the no of sets of triangle :"))
matrix=[]
for i in range(n):
    a = []
    print('enter the values row by rows of set',i+1)#enter a value and press the enter button
    for j in range(3):
        a.append(int(input()))
    matrix.append(a)

print()
print("the matrix is:")
for i in range(n):
    for j in range(3):
        print(matrix[i][j], end=" ")
    print()
print()
print()
print("the result is :")
for i in range(n):
   if (i+1)%3==0:
      result=matrix[i][2]
      if result<matrix[i][1]:
            result = matrix[i][1]
      if result < matrix[i][0]:
            result = matrix[i][0]
      print(result)
      print()
   elif (i+1)%3==1:
      result=matrix[i][2]
      if result>matrix[i][1]:
            result = matrix[i][1]
      if result>matrix[i][0]:
            result = matrix[i][0]
      print(result)
      print()
   elif (i + 1) % 3 == 2:
         if matrix[i][2]>matrix[i][0] and matrix[i][2]<matrix[i][1]:
            result=matrix[i][2]
         elif matrix[i][1]<matrix[i][2] and matrix[i][1]>matrix[i][0]:
            result=matrix[i][1]
         else:
            result=matrix[i][0]
         print(result)
         print()




