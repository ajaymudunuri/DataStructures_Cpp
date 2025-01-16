#include <iostream>
#include "../../00_Lib/stackLib.h"
#include "../../00_Lib/timeLib.h"
using namespace std;

void checkStringPattern(char string[])
{
    int size = sizeof(string)/sizeof(string[0]);
    bool midFlag = false;
    int i;
    stackLib stack;

    for(i = 0; i < size; i++)
    {
        if(string[i] == 'C')
        {
            midFlag = true;
            continue;
        }

        if(midFlag == false)
        {
            stack.pushChar(string[i]);
        }
        else
        {
            if(string[i] != stack.popChar())
            {
                break;
            }
        }
    }
    
    if((i == size) && (midFlag == true))
    {
        cout << "String matches the pattern" << endl;
    }
    else
    {
        cout << "String doesn't match the pattern" << endl;
    }
}

int main()
{
    timeLib time;
    time.startMeasurement();
    
    checkStringPattern("ABAACAABA"); // This should pass
    checkStringPattern("ABACAAABA"); // This should fail
    checkStringPattern("ABAAAABA"); // This should fail
    checkStringPattern("ABAABACABAABA"); // This should pass

    time.stopMeasurement();
    cout << "Execution Time : " << time.getMeasurement() << "nS" << endl;

    return 0;
}