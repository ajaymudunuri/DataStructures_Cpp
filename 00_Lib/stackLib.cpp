#include "stackLib.h"
#include <iostream>
using namespace std;

stackLib::stackLib(void)
{
    intStack.top = -1;
    charStack.top = -1;
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
        cout << "Contents of the stack are : ";
        for(int i = 0; i <= intStack.top; i++)
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

void stackLib::pushChar(char data)
{
    if(charStack.top < (STACKSIZE - 1))
    {
        charStack.top++;
        charStack.items[charStack.top] = data;
    }
}

char stackLib::popChar(void)
{
    char returnValue = char(0);

    if(!isEmptyChar())
    {
        returnValue = charStack.items[charStack.top];
        charStack.top--;
    }

    return returnValue;

}

bool stackLib::isEmptyChar(void)
{
    return(charStack.top == -1);
}

void stackLib::printCharStack(void)
{
    if(!isEmptyChar())
    {
        cout << "Contents of the stack are : ";
        for(int i = 0; i <= charStack.top; i++)
        {
            cout << charStack.items[i] << "\t";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }
}
