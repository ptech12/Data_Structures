import Stack1


def isMatch(n, m):
    if n == '{' and m == '}':
        return True
    elif n == '(' and m == ')':
        return True
    elif n == '[' and m == ']':
        return True
    else:
        return False

def findBal(s):
    stk = Stack1.Stack()
    bal = True
    for i in s:
        if i in "({[":
            stk.push(i)
            continue
        if(stk.isEmpty()):
            bal = False
        else:
            if i == ')':
                x = stk.pop()
                if(x == '{' or x=='['):
                    bal = False
                    break
            elif i == ']':
                x = stk.pop()
                if(x == '(' or x == '{'):
                    bal = False
                    break
            elif i == '}':
                x = stk.pop()
                if(x == '(' or x == '['):
                    bal = True
                    break
            else:
                continue
    if(bal and stk.isEmpty()):
        print("YES")
    else:
        print("NO")


expr = [
    "({})",
    "[{(}]"
]
for _ in expr:
    findBal(_)
    # print(string)
    # for i in range(len(S)):
    #     if S[i] == '{' or S[i] == '[' or S[i] == '(':
    #         s.push(S[0])
    #     elif S[i] == '}' or S[i] == ']' or S[i] == ')':
    #         if S[i] in ['}', ')', ']']:
    #             s.pop()
    # if len(s.getStack()) <= 0:
    #     print("YES")
    # else:
    #     print("NO")