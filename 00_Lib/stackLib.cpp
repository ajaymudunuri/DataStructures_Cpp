#include "stackLib.h"
#include <iostream>
using namespace std;

stackLib::stackLib(void)
{
    intStack.top = -1;
}

bool stackLib::isEmpty(void)
{
    return(intStack.top == -1);
}

void stackLib::pushInt(int data)
{
    if(intStack.top < (STACKSIZE - 1))
    {
        intStack.top++;
        intStack.items[intStack.top] = data;
    }
}

int stackLib::popInt(void)
{
    int returnValue = INT16_MIN;

    if(!isEmpty())
    {
        returnValue = intStack.items[intStack.top];
        intStack.top--;
    }

    return returnValue;
}

int stackLib::stackTop(void)
{
    int returnValue = INT16_MIN;

    if(!isEmpty())
    {
        returnValue = intStack.items[intStack.top];
    }

    return returnValue;
}

void stackLib::printStack(void)
{
    if(!isEmpty())
    {
        cout << "Contents of the stack are : " << endl;
        for(int i = 0; i < intStack.top; i++)
        {
            cout << intStack.items[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }
}
