n = int(input())

output = ""
for i in range(n):
    triangle = sorted(map(int, input().split()))
    output += f"{triangle[i % 3]}\n"
print(output)