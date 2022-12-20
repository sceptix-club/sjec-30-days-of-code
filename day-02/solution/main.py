n = int(input())

output = ''
for i in range(n):
    list = sorted(map(int, input().split()))
    output += f"{list[i % 3]}\n"
print(output)