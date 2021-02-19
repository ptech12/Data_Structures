#include <iostream>
#include <string.h>
#include "header/stack.h"
using namespace std;
#define qMax  3
// char q[qMax] = {
//    { "{()}"},
//     {"{([])}"},
//     {"{{(]}}"}
// };
bool match(char let)
{
    if (let =='{' || let == '(' || let == '[')
        return true;
    else
        return false;
}
bool isMatch(char m1, char m2)
{
    if (m1 ==  '{' && m2 == '}')
        return true;
    if (m1 ==  '(' && m2 == ')')
        return true;
    if (m1 ==  '[' && m2 == ']')
        return true;
    else
        return false;
}
void start(char *str)
{
    Stack<char> st;
    bool balanced = true;
    int index = 0;
    for(;index <= strlen(str) && balanced; ++index)
    {
        char letter = str[index];
        if (match(letter))
            st.push(letter);
        else{
            cout << letter << ": Letter not match\n---";
            if (st.isEmpty() == 1)
            {
                balanced = false;
                // cout << "Making balanced false\nstack is empty\n";
            }
            else
            {
                cout << "Stack is not empty\n";
                int top = st.pop();
                if(isMatch(top, letter))
                    balanced = false;
            }
        }
        // index++;
    }
    if (st.isEmpty() == 1&& balanced)
        cout << "YES\n";
    else
        cout << "NO\n";
}

void print(char *str)
{
    int i =0;
    while (i <= strlen(str))
    {
        cout << str[i];
    }
    
    
}

int main(int argc, char const *argv[])
{
    // for(int i=0; i < qMax; ++i)
    // {
    //     start(q[i]);
    // }
    char str[100]= {"{()}"};
    start(str);
    // print(str);
    return 0;
}
