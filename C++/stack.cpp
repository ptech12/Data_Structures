#include "header\stack.h"
#include <iostream>
using namespace std;

void start(string expr)
{
	return ;	
}


int main(int argc, char const *argv[])
{
	// string expr = "{()}";
	// start(expr);
	Stack<char> stk(10);
	char i = 97;
	while(i < 11+97)
	{
		if (stk.push(i))
		{
			cout << i << " was insert into stack" << endl;
		}
		cout << "Top value is: " << stk.peek() << endl;
		++i;
	}
	cout << "Size of Stack after push: " << stk.stackSize() << endl;

	while(stk.stackSize() > 3)
			{
				cout << stk.pop() << " was poped from the stack" << endl;
				--i;
			}
	cout << "Size of Stack after pop: " << stk.stackSize() << endl;
	return 0;
}