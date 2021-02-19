#include <iostream>
#include "stack.h"

int main()
{
    Stack a;
    a.push(10);
    a.push(20);
    a.stackItems();
     std::cout << a.pop() << std::endl;
    a.push(30);
    a.push(40);
    a.push(50);
     std::cout << a.pop() << std::endl;

    // a.stackItems();
    // std::cout << a.stackSize() << std::endl;
    // while(a.pop() != 0x36)
    // {
    //     std::cout << a.peek() << std::endl;
    // }
    std::cout << a.stackSize()  << std::endl;
    a.stackItems();
    // std::cout << a.pop() << std::endl;
    // std::cout << a.pop() << std::endl;
    // std::cout << a.pop() << std::endl;
    return 0;
}