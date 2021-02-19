from stack import Stack


n = int(input())
s = Stack(n)
res = []
for i in range(n):
    x = input().split()
    if x[0] == '1':
        s.push(x[1])
    elif x[0] == '2':
        s.pop()
    elif x[0] == '3':
        maxi = max(s.stack_())
        res.append(maxi)

for i in res:
    print(i)