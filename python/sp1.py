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
    # ino = input().split()
    # # print(ino)
    # if len(ino) >= 2:
    #     choice, x = int(ino[0]), int(ino[1])
    # else:
    #     choice = int(ino[0])
    # if choice == 1:
    #     x = int(input())
    #     s.push(x)
    # elif choice == 2:
    #     print(s.pop())
        
    # elif choice == 3:
    #     s.stack_()