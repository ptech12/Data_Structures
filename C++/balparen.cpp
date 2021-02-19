#include <iostream>
#include <string.h>
#include "header/stack.h"
using namespace std;

bool isBalancedExp(string exp) {
   // initialization of Stack
   Stack<char> stk(100);
   char x;
   // looping through the expression string
   for (int i=0; i< exp.length(); i++) {
      // if current character is any opening braces, push it into stack
      if (exp[i]=='('||exp[i]=='['||exp[i]=='{') {
         stk.push(exp[i]);
         continue;
      }
      // check if stack is Empty
      if (stk.isEmpty())
         return false;
      // Using Switch of current Character
      switch (exp[i]) {
         // if current character is closing braces
      case ')':
         // pick out top character of stack
         x = stk.peek();
         stk.pop();
         // if top character is opposite opening of current character
         if (x=='{' || x=='[')
            return false;
         break;
         // if current character is closing braces
      case '}':
         // pick out top character of stack
         x = stk.peek();
         stk.pop();
         // if top character is opposite opening of current character
         if (x=='(' || x=='[')
            return false;
         break;
         // if current character is closing braces
      case ']':
         // pick out top character of stack
         x = stk.peek();
         stk.pop();
         // if top character is opposite opening of current character
         if (x =='(' || x == '{')
            return false;
         break;
      }
   }
   // finally check stack is empty or not
   return (stk.isEmpty());
}
// just utility purpose
void print(char *str)
{
    int i =0;
    while (i <= strlen(str))
    {
        cout << str[i];
        ++i;
    } 
    
}

int main(int argc, char const *argv[])
{
   // expression
    string exp = "{([])}";
    if(isBalancedExp(exp))
      // if stack is empty, then parenthesis have proper opening and closing
      cout << "YES" << endl;
   else
      // not empty means, have no proper opening and closing
      cout << "NO" << endl;
    return 0;
}
