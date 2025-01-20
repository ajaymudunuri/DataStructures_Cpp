#include <iostream>
#include "../../00_Lib/stackLib.h"
#include "../../00_Lib/timeLib.h"
using namespace std;

const int array[] = {1, 3 , 7, 15, 21, 22, 36, 78, 95, 106};
const int arraySize = sizeof(array)/sizeof(array[0]);

int recursiveBinarySearch(int x, int low, int high)
{
    int index = -1;
    int mid;
    if(low > high)
    {
        index = -1;
    }
    else
    {
        mid = (low + high)/2;
        if(x == array[mid])
        {
            index = mid;
        }
        else
        {
            if(x < array[mid])
            {
                index = recursiveBinarySearch(x, low, mid - 1);
            }
            else
            {
                index = recursiveBinarySearch(x, mid + 1, high);
            }
        }
    }

    return(index);
}

int main()
{
    timeLib time;
    time.startMeasurement();
    int index;

    index = recursiveBinarySearch(1, 0, (arraySize - 1));
    if(index == -1)
    {
        cout << "1 is not found in the array" << endl;
    }
    else
    {
        cout << "1 is " << index << "th element of the array" << endl;
    }

    index = recursiveBinarySearch(20, 0, (arraySize - 1));
    if(index == -1)
    {
        cout << "20 is not found in the array" << endl;
    }
    else
    {
        cout << "20 is " << index << "th element of the array" << endl;
    }

    index = recursiveBinarySearch(36, 0, (arraySize - 1));
    if(index == -1)
    {
        cout << "36 is not found in the array" << endl;
    }
    else
    {
        cout << "36 is " << index << "th element of the array" << endl;
    }
    
    
    time.stopMeasurement();
    cout << "Execution Time : " << time.getMeasurement() << "nS" << endl;

    return 0;
}