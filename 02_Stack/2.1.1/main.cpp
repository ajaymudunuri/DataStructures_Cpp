#include <iostream>
#include "../../00_Lib/stackLib.h"
using namespace std;

int main()
{
    stackLib stack;

    stack.printStack();
    stack.pushInt(10);
    stack.pushInt(20);
    stack.printStack();
    cout << stack.popInt() << endl;
    stack.printStack();
    cout << stack.stackTop() << endl;
    stack.printStack();
    cout << stack.popInt() << endl;
    stack.printStack();

    return 0;
}