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
    index = 0
    while index < len(s) and bal:
        ch = s[index]
        if ch in "{[(":
            stk.push(ch)
        else:
            if stk.isEmpty():
                bal = False
            else:
                top = stk.pop()
                if not isMatch(top, ch):
                    bal = False
        index += 1
    if (stk.isEmpty() and bal):
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